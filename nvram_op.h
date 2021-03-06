#ifndef NVRAM_OP_H
#define NVRAM_OP_H


/* NVRAM operations. */
int nvram_open(int nvram_type_arg);
int nvram_close(void);

unsigned char nvram_read(unsigned int address);
void nvram_write(unsigned int address, unsigned char data);
void nvram_flush();

void nvram_write_immediate(unsigned int address, unsigned char data);

int nvram_probe(int nvram_type_arg);
int nvram_detect(void);

#endif
