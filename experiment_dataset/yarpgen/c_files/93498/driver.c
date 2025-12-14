#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 546772080;
int var_5 = -2147313973;
signed char var_8 = (signed char)17;
long long int var_9 = -6600118050322352434LL;
unsigned int var_13 = 3002579058U;
int zero = 0;
unsigned int var_18 = 162113449U;
int var_19 = -930166851;
signed char var_20 = (signed char)19;
signed char var_21 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
