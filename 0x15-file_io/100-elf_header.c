/*
 * File: 100-elf_header.c
 * Auth: Valentine Ogbuagu
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Verifies if a file header corresponds
 *		to an ELF file format.
 * @e_ident: Pointer to an array containing ELF
 *		magic numbers.
 *
 * Description: Checks the first four bytes of the
 * file header to determine if it adheres to the ELF
 *file format. If not an ELF file, exits with code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Displays the ELF magic numbers
 * from the header.
 * @e_ident: Pointer to an array containing the
 * ELF magic numbers.
 *
 * Description: Prints the ELF magic numbers as
 * hexadecimal values, separated by spaces.
 * These values are essential for identifying
 * the ELF file format.
 */

void print_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Displays the class information
 * of an ELF header.
 * @e_ident: Pointer to an array containing the
 * ELF class information.
 *
 * Description: Prints the class of the ELF file
 * format, which defines the architecture and word
 * size for the binary. It can be none, ELF32, or ELF64.
 * Any other value is treated as unknown.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Displays the data representation
 * of an ELF header.
 * @e_ident: Pointer to an array containing the
 * ELF data representation.
 *
 * Description: Prints the data representation
 * of the ELF file, which indicates the endianness
 * (byte order) of the data in the file. It can be
 * none, little endian, or big endian, defining
 * how the data is arranged in memory.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Displays the version information
 * of an ELF header.
 * @e_ident: Pointer to an array containing the ELF
 * version information.
 *
 * Description: Prints the version number specified
 * in the ELF header, indicating the version of the
 * ELF file format used. Typically, the version is
 * defined as EV_CURRENT.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Displays the Operating System/ABI
 * information from an ELF header.
 * @e_ident: Pointer to an array containing the ELF
 * OS/ABI information.
 *
 * Description: Prints the identifier of the operating
 * system and ABI (Application Binary Interface)
 * specified in the ELF header. This field indicates
 * the target OS/ABI for which the binary is intended.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Displays the Application Binary Interface
 * (ABI) version from an ELF header.
 * @e_ident: Pointer to an array containing the ELF ABI
 * version information.
 *
 * Description: Prints the ABI version specified in the
 * ELF header. The ABI version represents additional
 * version information related to the ABI, providing
 * details about the specific interface version of the binary.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Displays the type information from an ELF
 * header.
 * @e_type: The ELF type.
 * @e_ident: Pointer to an array containing the ELF class
 * information.
 *
 * Description: Prints the type of the ELF file specified
 * in the header, indicating whether it's a relocatable,
 * executable, shared object, core, or other type.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Displays the entry point address from
 * an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: Pointer to an array containing the ELF
 * class information.
 *
 * Description: Prints the address of the entry point
 * in the ELF file header, representing the memory
 * address where the execution of the program begins.
 * Byte order adjustments are made for big-endian architectures.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes the file descriptor of an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: Closes the file descriptor associated
 * with the ELF file. This action is crucial for
 * releasing system resources. If closing the file
 * fails, the program exits with code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information from the ELF header
 * at the beginning of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on successful execution.
 *
 * Description: This function examines the ELF header
 * of a given file to display essential information
 * about the file's format. If the file is not an ELF
 * file or if the operation fails, the program exits
 * with code 98.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
