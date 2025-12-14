#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4053492866U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)46335;
unsigned long long int var_6 = 1522810627384935824ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)8782;
int var_13 = 162380633;
unsigned short var_14 = (unsigned short)55569;
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
