#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10874708274697349257ULL;
short var_1 = (short)-29940;
int var_4 = 1777798293;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)24125;
long long int var_7 = 5561135077172834035LL;
unsigned int var_9 = 3437039043U;
int zero = 0;
unsigned char var_10 = (unsigned char)202;
signed char var_11 = (signed char)122;
long long int var_12 = 6851922273234461447LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
