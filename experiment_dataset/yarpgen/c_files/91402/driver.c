#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned char var_3 = (unsigned char)96;
_Bool var_4 = (_Bool)0;
int var_5 = 2064613445;
int var_7 = 1452199506;
int var_8 = 777517480;
unsigned char var_9 = (unsigned char)230;
unsigned long long int var_10 = 9804917632469039816ULL;
unsigned long long int var_12 = 10767173377984186818ULL;
int zero = 0;
long long int var_13 = 1575941262934403176LL;
_Bool var_14 = (_Bool)1;
int var_15 = 1807306615;
int var_16 = 1308885182;
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
