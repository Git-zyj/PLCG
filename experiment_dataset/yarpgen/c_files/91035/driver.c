#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16630;
long long int var_2 = -2555630707327967437LL;
long long int var_4 = -381046571168735801LL;
long long int var_15 = -3023541609809293343LL;
unsigned int var_16 = 3839889926U;
int zero = 0;
signed char var_17 = (signed char)95;
signed char var_18 = (signed char)-34;
void init() {
}

void checksum() {
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
