// C/C++ syntax: __builtin_custom_<return type>n<parameter types>

// Return and parameter type abbreviations:
// i?int
// f?float
// p?void *

// Example from system.h
void __builtin_custom_nff (int n, float dataa, float datab);
float __builtin_custom_inpf (int n, void * dataa, float datab);


int main(void)
{
	float f1 = 0.0;
	char whatever[] = "DEADBEEF\0"
	void* v1 = &whatever;
	int selectionIndex = 0;

	int result = __builtin_custom_inpf(selectionIndex, f1, v1);

	// Goodbye cruel world
	return result;
}
