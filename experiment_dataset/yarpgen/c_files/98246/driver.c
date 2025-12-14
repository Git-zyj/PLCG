#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)108;
signed char var_4 = (signed char)91;
signed char var_5 = (signed char)-7;
unsigned char var_8 = (unsigned char)162;
int zero = 0;
unsigned short var_12 = (unsigned short)46513;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)126;
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
