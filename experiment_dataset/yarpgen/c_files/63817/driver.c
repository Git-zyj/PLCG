#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 800630702;
signed char var_1 = (signed char)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 15934176766909829282ULL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-119;
unsigned char var_11 = (unsigned char)100;
int zero = 0;
unsigned int var_12 = 466225978U;
int var_13 = -676517115;
signed char var_14 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
