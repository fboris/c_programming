#include <stdbool.h>
typedef struct my_obj{
	int a;
	int b;
}obj_t;
void init_obj(int _a, int _b);
bool obj_read_ptr(const obj_t* read_ptr);

const  obj_t *obj_return_ptr(void);