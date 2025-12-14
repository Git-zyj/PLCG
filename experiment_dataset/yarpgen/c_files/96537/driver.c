#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
short var_1 = (short)15368;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)46247;
short var_11 = (short)-21556;
int zero = 0;
signed char var_18 = (signed char)-93;
int var_19 = 1782192383;
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
