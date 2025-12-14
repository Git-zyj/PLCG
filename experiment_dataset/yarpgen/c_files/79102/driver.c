#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
signed char var_1 = (signed char)62;
long long int var_6 = -6911498323607032546LL;
short var_7 = (short)26465;
long long int var_8 = -389646248513307142LL;
int var_9 = -1033346251;
unsigned int var_10 = 1955194870U;
unsigned long long int var_13 = 11720813478193535463ULL;
int zero = 0;
unsigned int var_14 = 3053834499U;
unsigned short var_15 = (unsigned short)49166;
unsigned long long int var_16 = 10822774135654351552ULL;
void init() {
}

void checksum() {
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
