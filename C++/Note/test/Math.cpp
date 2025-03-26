
const char* Log(const char* message)
{
	return message;
}

int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int Add(int a, int b)
{
	Log("Add");
	return a + b;
}

int Subtract(int a, int b)
{
	Log("Subtract");
	return a - b;
}

int Divide(int a, int b)
{
	Log("Divide");
	return a / b;
}