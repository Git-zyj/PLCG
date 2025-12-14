#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9741;
signed char var_3 = (signed char)-51;
unsigned short var_4 = (unsigned short)48393;
int var_8 = 1203498127;
short var_9 = (short)13076;
long long int var_10 = 8171476257616858154LL;
signed char var_11 = (signed char)40;
unsigned short var_12 = (unsigned short)53934;
int var_16 = -1434495279;
int zero = 0;
unsigned int var_19 = 3473797023U;
unsigned int var_20 = 3285689144U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
