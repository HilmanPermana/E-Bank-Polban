

struct akun{
	char nama[100];
	char noRek[10];
	char password[50];
	int saldo; 
}ak, akn;

char filename[100],nama[50],password[50],phone2[50], noRek[10];
int jumlah; 
int input;

void gotoxy(int x, int y);
void sambutan(); 
void daftar();
void masuk();
void menu(); 
void cekSaldo(); 
void deposit(); 
void modifikasiAkun(); 
void tutupAkun(); 
void transfer(); 
char keluar();
