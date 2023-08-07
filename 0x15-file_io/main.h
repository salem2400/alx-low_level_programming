#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_magic(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_osabi(Elf64_Ehdr h);
void print_abiversion(Elf64_Ehdr h);
void print_osabi_more(Elf64_Ehdr h);
void print_type(Elf64_Ehdr h);
void print_entry(Elf64_Ehdr h);
#endif
