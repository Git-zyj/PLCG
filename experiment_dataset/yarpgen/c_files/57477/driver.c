#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-66;
long long int var_19 = 7248446414772069703LL;
int zero = 0;
unsigned short var_20 = (unsigned short)59014;
long long int var_21 = -5436363885511585023LL;
unsigned short var_22 = (unsigned short)29857;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
