#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)78;
short var_9 = (short)4467;
int var_12 = 39806977;
unsigned int var_13 = 3765447709U;
signed char var_18 = (signed char)-98;
unsigned short var_19 = (unsigned short)16333;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
unsigned int var_21 = 2638397224U;
signed char var_22 = (signed char)-53;
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
