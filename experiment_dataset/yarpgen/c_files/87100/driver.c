#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1881127857;
unsigned int var_5 = 3820184012U;
_Bool var_7 = (_Bool)1;
int var_9 = -1873970530;
unsigned long long int var_10 = 16465162134196844703ULL;
long long int var_11 = 4822872656597990265LL;
int zero = 0;
unsigned short var_12 = (unsigned short)27471;
long long int var_13 = -7563974488656836922LL;
unsigned short var_14 = (unsigned short)34496;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
