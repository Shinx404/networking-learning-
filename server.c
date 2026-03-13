#include <sys/socket.h>
#include <sys/types.h>



int main(void){
	struct sockaddr_in sa;
	struct sockaddr_in6 sa6;
	
	sa6.sin6_addr = in6addr_any;
	sa.sin_addr.s_addr = INADDR_ANY;
	return 0;
}
