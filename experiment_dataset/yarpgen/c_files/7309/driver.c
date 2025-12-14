#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1378718502255300446LL;
short var_3 = (short)13058;
unsigned char var_4 = (unsigned char)97;
unsigned short var_5 = (unsigned short)26317;
unsigned char var_7 = (unsigned char)74;
_Bool var_8 = (_Bool)1;
int var_9 = 1844645421;
int zero = 0;
unsigned int var_11 = 3934702402U;
long long int var_12 = -674271623933798856LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
