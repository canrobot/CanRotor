#pragma once

void MX_I2C2_Init(void);

void I2C_ByteWrite(uint8_t DevAddress, uint8_t MemAddress, uint8_t bitStart, uint8_t length, uint8_t data);
void I2C_BitWrite(uint8_t DevAddress, uint8_t MemAddress, uint8_t bitNum, uint8_t data);
//void I2C_ByteRead(uint8_t DevAddress, uint8_t MemAddress, uint8_t bitStart, uint8_t length, uint8_t *data);
void I2C_BitRead(uint8_t DevAddress, uint8_t MemAddress, uint8_t bitNum, uint8_t *data);
void I2C_ByteRead(uint16_t DevAddress, uint16_t MemAddress, uint16_t MemAddSize, uint8_t *pData, uint16_t Size);
