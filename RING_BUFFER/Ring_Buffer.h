#ifndef RINGBUFF_C_
#define RINGBUFF_C_

#include "stdint.h"
#include "stm32f1xx_hal.h"

typedef struct
{
	uint8_t *pt;
	uint32_t tail;
	uint32_t head;
	uint32_t size;
}RINGBUF;

int32_t RINGBUF_Init(RINGBUF *r, uint8_t *buf,uint32_t size);
int8_t RINGBUF_Put(RINGBUF *r, uint8_t c);
int32_t RINGBUF_Get(RINGBUF *r, uint8_t* c);
int8_t RINGBUF_Clear(RINGBUF *r, uint8_t num);
int8_t RINGBUF_GetFill(RINGBUF *r);


#endif /* RINGBUFF_C_ */
