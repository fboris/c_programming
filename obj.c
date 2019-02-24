#include "obj.h"

static obj_t _obj_impl;
void init_obj(int _a, int _b)
{

	_obj_impl.a = _a;
	_obj_impl.b = _b;

}


bool obj_read_ptr(const obj_t* read_ptr)
{
	read_ptr = &_obj_impl;
	return true;
}

const  obj_t *obj_return_ptr(void)
{

	return &_obj_impl;
}