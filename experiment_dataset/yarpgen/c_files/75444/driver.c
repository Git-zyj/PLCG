#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -707562858963485393LL;
short var_3 = (short)13876;
unsigned short var_5 = (unsigned short)50830;
long long int var_6 = 46954750860783754LL;
unsigned char var_8 = (unsigned char)183;
unsigned char var_9 = (unsigned char)161;
long long int var_10 = -5169618354236068609LL;
long long int var_11 = 6633180029684826669LL;
int zero = 0;
short var_13 = (short)-8738;
unsigned short var_14 = (unsigned short)5294;
long long int var_15 = -8577883256797266742LL;
unsigned int var_16 = 1801494032U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
