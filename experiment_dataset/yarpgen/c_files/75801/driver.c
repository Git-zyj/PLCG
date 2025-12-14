#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1935643501372327903ULL;
unsigned short var_6 = (unsigned short)900;
int var_7 = -615134656;
unsigned char var_10 = (unsigned char)198;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
