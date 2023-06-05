#include "Python.h"

long int add(PyObject *a, PyObject *b)
{
	long int op1, op2;
	
	op1 = PyLong_AsLong(a);
	op2 = PyLong_AsLong(b);
	printf("%li\n", op1 + op2);
	return (op1 + op2);
	
}
