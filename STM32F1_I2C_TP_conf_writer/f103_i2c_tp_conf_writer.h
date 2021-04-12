#ifndef F103_I2C_TP_CONF_READER_H
#define F103_I2C_TP_CONF_READER_H

void printhexnibble(unsigned char nibble);

int sendi2cslaveaddres(uint8_t address, uint8_t mode);

int sendi2cbyte(uint8_t byte);

int readi2cbyte(uint8_t ack);

int writei2cconfig(void);


#endif /* F103_I2C_TP_CONF_READER_H */

