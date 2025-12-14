#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned long long int var_9 = 15164656791874871455ULL;
unsigned char var_10 = (unsigned char)157;
short var_11 = (short)-9402;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 4613411420716906539ULL;
unsigned short var_15 = (unsigned short)32268;
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
