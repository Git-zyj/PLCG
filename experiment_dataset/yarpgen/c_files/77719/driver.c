#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7942720944832346441ULL;
unsigned char var_2 = (unsigned char)171;
unsigned short var_4 = (unsigned short)46660;
unsigned long long int var_5 = 16906343732197305653ULL;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)25;
unsigned char var_15 = (unsigned char)185;
int zero = 0;
short var_18 = (short)7480;
unsigned long long int var_19 = 5759141880470923678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
