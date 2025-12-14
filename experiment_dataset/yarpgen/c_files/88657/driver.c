#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4012005948662799950ULL;
signed char var_6 = (signed char)-13;
_Bool var_7 = (_Bool)0;
long long int var_8 = -3256053575708783713LL;
unsigned int var_9 = 245276163U;
int zero = 0;
short var_11 = (short)4446;
unsigned char var_12 = (unsigned char)187;
short var_13 = (short)13684;
unsigned char var_14 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
