#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2242822502U;
int var_1 = -763633517;
int var_5 = 1554096524;
unsigned short var_7 = (unsigned short)14859;
signed char var_8 = (signed char)-41;
unsigned int var_9 = 1065440188U;
unsigned char var_10 = (unsigned char)193;
unsigned char var_11 = (unsigned char)41;
int var_12 = -1831672406;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1518110022473542102ULL;
int var_16 = -352084782;
void init() {
}

void checksum() {
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
