#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27799;
short var_1 = (short)16380;
unsigned long long int var_2 = 10600733991624833986ULL;
unsigned short var_3 = (unsigned short)17922;
unsigned short var_5 = (unsigned short)27875;
unsigned short var_7 = (unsigned short)58359;
_Bool var_8 = (_Bool)1;
short var_12 = (short)25571;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 9112616212177597933LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
