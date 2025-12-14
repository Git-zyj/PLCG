#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50149;
signed char var_2 = (signed char)84;
_Bool var_6 = (_Bool)0;
signed char var_14 = (signed char)65;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
unsigned short var_20 = (unsigned short)7385;
unsigned long long int var_21 = 6002790109352517643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
