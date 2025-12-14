#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned long long int var_1 = 827630720421341370ULL;
unsigned int var_2 = 3290942126U;
unsigned long long int var_3 = 5721028840383585786ULL;
unsigned short var_4 = (unsigned short)38133;
short var_5 = (short)3993;
signed char var_7 = (signed char)-127;
short var_8 = (short)28848;
int var_9 = 129094659;
int zero = 0;
unsigned short var_11 = (unsigned short)64416;
int var_12 = 2113489243;
unsigned int var_13 = 1801131815U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
