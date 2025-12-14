#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21666;
long long int var_2 = -7493282904755813808LL;
long long int var_3 = 8455666308198240045LL;
unsigned int var_10 = 3939431708U;
int zero = 0;
long long int var_13 = -8074496222423839152LL;
long long int var_14 = 1119181748025035270LL;
signed char var_15 = (signed char)-73;
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
