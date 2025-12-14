#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
short var_1 = (short)14335;
signed char var_2 = (signed char)-94;
unsigned long long int var_4 = 14267181477391053082ULL;
short var_6 = (short)519;
signed char var_7 = (signed char)43;
short var_8 = (short)29616;
long long int var_9 = -7091722497192578510LL;
int zero = 0;
signed char var_10 = (signed char)-123;
long long int var_11 = 1289815174604055367LL;
long long int var_12 = 6077054525375378192LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
