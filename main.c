#include <stdio.h>
#include "obj.h"




int main(char **input)
{

	init_obj(55, 20);
	const obj_t * _obj =NULL;
	obj_read_ptr(_obj);
	// _obj = obj_return_ptr();
	printf("obj a:%d b:%d \r\n", _obj->a,_obj->b);
	return 1;

}