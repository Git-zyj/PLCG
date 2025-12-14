#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
unsigned char var_4 = (unsigned char)154;
unsigned int var_5 = 1307672073U;
unsigned int var_15 = 1251418945U;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
unsigned char var_21 = (unsigned char)44;
unsigned long long int var_22 = 7244840621677014030ULL;
unsigned char var_23 = (unsigned char)107;
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
