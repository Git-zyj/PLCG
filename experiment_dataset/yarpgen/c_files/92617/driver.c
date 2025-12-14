#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25559;
unsigned short var_2 = (unsigned short)10076;
unsigned int var_4 = 4256108938U;
unsigned char var_5 = (unsigned char)7;
unsigned short var_7 = (unsigned short)26334;
int var_9 = -1963873372;
int var_10 = -1043368940;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-59;
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
