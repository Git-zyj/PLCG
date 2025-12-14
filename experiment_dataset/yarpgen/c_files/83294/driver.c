#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 186489893;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2073959099U;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)197;
int zero = 0;
short var_13 = (short)-5407;
short var_14 = (short)4362;
unsigned long long int var_15 = 15093431294227576098ULL;
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
