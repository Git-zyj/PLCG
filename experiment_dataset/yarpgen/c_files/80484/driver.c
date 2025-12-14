#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned short var_1 = (unsigned short)4382;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 17690439089021453506ULL;
int zero = 0;
int var_20 = 1490004529;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)17521;
signed char var_23 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
