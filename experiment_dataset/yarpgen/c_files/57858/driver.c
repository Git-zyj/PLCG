#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4137554029U;
unsigned short var_2 = (unsigned short)53908;
unsigned long long int var_7 = 16835044254238835636ULL;
int var_8 = 120034560;
int zero = 0;
unsigned char var_14 = (unsigned char)54;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
