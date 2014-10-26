#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main()
{
    int fd;
    fd = open ("test.txt", O_RDWR);
    if (fd == -1)
    {
        cout << "Error in opening!" << endl;
    	return -1;
    }

    unsigned long word = 1720;
    size_t count;
    ssize_t nr;
    count = sizeof (word);
    nr = write (fd, &word, count);
    
    if (nr == -1)
    {
        cout << "Error! Check errorno." << endl;
    }
    else if (nr != count)
    {
        cout << "Possible error, but 'errno' not set" << endl;
    }
    else
    {
        cout << "Success!" << endl;
    }

    return 0;
}
