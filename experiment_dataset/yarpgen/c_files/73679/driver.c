#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1800231696U;
unsigned char var_3 = (unsigned char)57;
unsigned int var_6 = 99866556U;
unsigned short var_7 = (unsigned short)41788;
long long int var_8 = -2085884283093944860LL;
unsigned int var_9 = 3386330399U;
int var_10 = -2126373431;
unsigned int var_11 = 879466101U;
unsigned short var_13 = (unsigned short)48299;
unsigned int var_14 = 1490093246U;
unsigned int var_17 = 903316631U;
short var_19 = (short)22114;
int zero = 0;
unsigned int var_20 = 2325951698U;
unsigned short var_21 = (unsigned short)62606;
unsigned long long int var_22 = 5143570579182168727ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
