#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 407834625145762555ULL;
signed char var_4 = (signed char)83;
unsigned int var_6 = 3553075640U;
_Bool var_8 = (_Bool)0;
short var_13 = (short)-2470;
unsigned short var_16 = (unsigned short)17662;
int zero = 0;
long long int var_19 = -8456506495781299519LL;
short var_20 = (short)-20097;
unsigned int var_21 = 597432028U;
unsigned char var_22 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
