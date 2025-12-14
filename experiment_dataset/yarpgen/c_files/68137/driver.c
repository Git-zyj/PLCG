#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19392;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)115;
int zero = 0;
unsigned long long int var_12 = 4565668603582562502ULL;
unsigned char var_13 = (unsigned char)154;
unsigned char var_14 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
