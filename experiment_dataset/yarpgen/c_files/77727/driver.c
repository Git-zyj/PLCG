#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16471072937345080612ULL;
signed char var_2 = (signed char)52;
unsigned int var_5 = 2972498639U;
int var_6 = 649968675;
unsigned char var_10 = (unsigned char)165;
int zero = 0;
unsigned short var_11 = (unsigned short)48429;
unsigned char var_12 = (unsigned char)180;
short var_13 = (short)27231;
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
