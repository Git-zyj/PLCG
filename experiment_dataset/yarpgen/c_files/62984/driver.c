#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1717510018;
int var_4 = 612874416;
int var_6 = -228341376;
short var_9 = (short)-18536;
int zero = 0;
short var_11 = (short)-20155;
unsigned int var_12 = 550717090U;
long long int var_13 = 7655700381050471374LL;
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
