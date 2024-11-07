#include "stdint.h"
#include "string.h"
#include "Ring_Buffer.h"
#include "stdlib.h"

int32_t RINGBUF_Init(RINGBUF *r, uint8_t *buf,uint32_t size){
	if(r == NULL || buf == NULL || size < 2) return -1;

	r->pt = buf;
	r->head = 0;
	r->tail = 0;
	r->size = size;

	return 0;
}
int8_t RINGBUF_Put(RINGBUF *r, uint8_t c){
	uint32_t temp;
	temp = r->head;
	temp++;
	if(temp >= r->size)
	{
		temp = 0;
	}
	if(temp == r->tail)
	{
		return -1;//Ring buffer full
	}

	r->pt[r->head] = c;
	r->head = temp;

	return 0;

}

int32_t RINGBUF_Get(RINGBUF *r, uint8_t* c)
{
	if(r->tail == r->head)
	{
		return -1;
	}
	*c = r->pt[r->tail];
	r->tail++;
	if(r->tail >= r->size)
	{
		r->tail = 0;
	}
	return 0;
}

int8_t RINGBUF_Clear(RINGBUF *r, uint8_t num)
{
	if(r->tail == r->head)
	{
		return -1;
	}

	if(num > r->head - r->tail)
	{
		num = r->head - r->tail;
	}

	r->head = r->head - num;
	return 0;
}

int8_t RINGBUF_GetFill(RINGBUF *r)
{
	if(r->head > r->tail)
	{
		return r->head - r->tail;
	}
	else return r->size - r->tail + r->head;
}
























