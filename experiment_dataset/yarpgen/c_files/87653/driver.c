#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
int var_1 = -486802302;
int var_2 = -1722464388;
unsigned int var_4 = 2845488047U;
unsigned long long int var_5 = 5713413671939424640ULL;
unsigned long long int var_6 = 9899307581648717485ULL;
unsigned int var_7 = 1085258449U;
unsigned long long int var_10 = 1679056741364318929ULL;
short var_11 = (short)-9785;
int zero = 0;
unsigned long long int var_12 = 16181345515012689700ULL;
unsigned short var_13 = (unsigned short)5672;
short var_14 = (short)20911;
unsigned char var_15 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
