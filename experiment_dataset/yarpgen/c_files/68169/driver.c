#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)119;
unsigned char var_11 = (unsigned char)0;
unsigned long long int var_12 = 6618271523810822200ULL;
_Bool var_14 = (_Bool)0;
short var_16 = (short)10264;
unsigned short var_17 = (unsigned short)37680;
unsigned int var_18 = 1521746459U;
int zero = 0;
signed char var_19 = (signed char)39;
int var_20 = -607614823;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
