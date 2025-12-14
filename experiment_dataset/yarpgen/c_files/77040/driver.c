#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)37963;
int var_2 = 1502627486;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-11612;
_Bool var_7 = (_Bool)0;
int var_9 = 1327916106;
int zero = 0;
short var_12 = (short)11209;
unsigned int var_13 = 2522741492U;
unsigned char var_14 = (unsigned char)7;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
