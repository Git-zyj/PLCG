#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)19367;
unsigned int var_10 = 3023093547U;
int zero = 0;
signed char var_13 = (signed char)1;
unsigned long long int var_14 = 15823706655673067179ULL;
void init() {
}

void checksum() {
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
