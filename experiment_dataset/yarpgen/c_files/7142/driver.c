#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5635233920649650392LL;
long long int var_2 = 7943578265316309753LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)44398;
unsigned char var_7 = (unsigned char)199;
signed char var_8 = (signed char)-12;
short var_9 = (short)-31041;
int zero = 0;
unsigned char var_13 = (unsigned char)177;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)49;
unsigned long long int var_16 = 8944016467815612657ULL;
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
