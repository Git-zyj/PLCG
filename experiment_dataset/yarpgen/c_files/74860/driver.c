#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2717234783296679233LL;
unsigned long long int var_8 = 18112670878061037724ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)47460;
short var_14 = (short)-24238;
int zero = 0;
unsigned short var_15 = (unsigned short)52212;
long long int var_16 = 65760654547843495LL;
void init() {
}

void checksum() {
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
