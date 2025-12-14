#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -584792524;
long long int var_2 = 6221122738375295107LL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)4071;
long long int var_10 = -6008175062586945920LL;
int zero = 0;
unsigned char var_15 = (unsigned char)65;
short var_16 = (short)25738;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
