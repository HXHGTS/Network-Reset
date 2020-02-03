#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* hosts;
	system("netsh int ipv4 reset");
	system("netsh int ipv6 reset");
	system("netsh winsock reset");
	system("reg add \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\" /v ProxyEnable /t REG_DWORD /d 0 /f ");
	hosts = fopen("C:\\Windows\\System32\\drivers\\etc\\hosts","w");
	fprintf(hosts, "%s", "127.0.0.1	localhost\n");
	fclose(hosts);
	system("cls");
	printf("选项已更改，此计算机需要重启，");
	system("pause");
	system("shutdown -r -t 15");
}