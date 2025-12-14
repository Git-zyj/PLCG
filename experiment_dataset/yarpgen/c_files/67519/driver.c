#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4055748335051576588LL;
unsigned int var_5 = 4105425688U;
short var_6 = (short)-15620;
unsigned int var_13 = 2228322912U;
int var_14 = -1163727496;
long long int var_17 = 8629867351170408918LL;
short var_19 = (short)21872;
int zero = 0;
short var_20 = (short)24315;
signed char var_21 = (signed char)106;
signed char var_22 = (signed char)64;
unsigned short var_23 = (unsigned short)38803;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
