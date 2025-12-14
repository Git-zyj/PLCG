#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2457;
unsigned char var_2 = (unsigned char)152;
long long int var_3 = 625848336931812249LL;
signed char var_4 = (signed char)-82;
unsigned char var_5 = (unsigned char)199;
long long int var_6 = -2927889196812574857LL;
unsigned int var_7 = 793077918U;
_Bool var_8 = (_Bool)0;
int var_9 = 2030180920;
unsigned int var_10 = 3940370475U;
signed char var_11 = (signed char)5;
int zero = 0;
short var_15 = (short)19972;
unsigned short var_16 = (unsigned short)20987;
long long int var_17 = 6688442790554585362LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
