#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17422151890873610573ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)96;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 5597365765296773967ULL;
unsigned char var_15 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
