#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned char var_2 = (unsigned char)58;
signed char var_4 = (signed char)-18;
short var_5 = (short)15750;
int var_7 = 385962441;
int var_8 = -757093529;
int zero = 0;
int var_14 = -91220874;
unsigned int var_15 = 900637502U;
void init() {
}

void checksum() {
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
