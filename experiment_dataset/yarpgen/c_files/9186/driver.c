#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
signed char var_9 = (signed char)-51;
long long int var_13 = 5304328835588634159LL;
unsigned int var_15 = 2500463096U;
short var_17 = (short)29044;
int zero = 0;
unsigned char var_20 = (unsigned char)129;
signed char var_21 = (signed char)12;
int var_22 = -445241160;
int var_23 = 717727940;
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
