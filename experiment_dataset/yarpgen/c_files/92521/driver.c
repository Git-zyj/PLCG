#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)8;
long long int var_7 = -6293759264936211839LL;
signed char var_10 = (signed char)-18;
int var_12 = -1306895937;
signed char var_14 = (signed char)123;
int zero = 0;
unsigned long long int var_16 = 6212462827368595649ULL;
unsigned char var_17 = (unsigned char)6;
signed char var_18 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
