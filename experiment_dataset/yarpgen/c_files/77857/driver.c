#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 105345869;
short var_1 = (short)-14667;
unsigned short var_2 = (unsigned short)22671;
int var_3 = -267205049;
unsigned long long int var_6 = 17208306022192773107ULL;
long long int var_8 = 1925501802113465846LL;
int zero = 0;
unsigned char var_11 = (unsigned char)3;
_Bool var_12 = (_Bool)0;
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
