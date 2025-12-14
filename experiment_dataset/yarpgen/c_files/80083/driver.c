#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1097080593;
signed char var_1 = (signed char)27;
signed char var_3 = (signed char)88;
int var_5 = -456910518;
signed char var_8 = (signed char)-95;
int var_11 = -974035448;
int var_13 = -1379848777;
unsigned char var_15 = (unsigned char)150;
int zero = 0;
int var_18 = 847507482;
signed char var_19 = (signed char)-14;
int var_20 = 2129305106;
int var_21 = -1203571455;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
