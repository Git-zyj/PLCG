#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 681993196176652246ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -1973177583;
unsigned char var_4 = (unsigned char)145;
unsigned char var_5 = (unsigned char)145;
short var_6 = (short)30010;
_Bool var_7 = (_Bool)0;
short var_9 = (short)7274;
int zero = 0;
long long int var_11 = 7952876477896331319LL;
short var_12 = (short)845;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
