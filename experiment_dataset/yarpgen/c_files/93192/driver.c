#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6636;
_Bool var_3 = (_Bool)1;
short var_8 = (short)5839;
int var_9 = -569899589;
short var_13 = (short)10038;
short var_15 = (short)-22728;
unsigned char var_17 = (unsigned char)231;
int zero = 0;
short var_18 = (short)31957;
unsigned char var_19 = (unsigned char)103;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)47;
unsigned int var_22 = 2221371709U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
