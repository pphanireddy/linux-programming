#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main()
{
    int fd;
    fd = open ("/home/kidd/madagascar", O_RDONLY);
    if (fd == -1)
    	cout << "Error!" << endl;
    return 0;
}
