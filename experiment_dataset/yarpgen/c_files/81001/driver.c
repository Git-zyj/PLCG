#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1317779847U;
unsigned int var_2 = 3159366606U;
int var_4 = -680924053;
unsigned int var_5 = 2155946379U;
long long int var_9 = 1368344351659700334LL;
int zero = 0;
unsigned int var_10 = 3231012979U;
unsigned int var_11 = 2882412282U;
int var_12 = -268881940;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
