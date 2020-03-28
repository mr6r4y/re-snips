struct Point {
	int x;
	int y;
};

struct Point create_struct(int x, int y)
{
	return (struct Point) {x, y};
}

int main(int argc, char const *argv[])
{
	struct Point p = create_struct(1, 2);
	return 0;
}
