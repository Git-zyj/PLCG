#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 772659676;
int var_1 = -1226947590;
int var_2 = 399130514;
unsigned int var_8 = 1687686963U;
short var_12 = (short)-27979;
unsigned short var_14 = (unsigned short)4783;
unsigned long long int var_17 = 4801055697537145848ULL;
int zero = 0;
signed char var_20 = (signed char)-35;
int var_21 = -469879782;
long long int var_22 = -2082553174328454891LL;
unsigned short var_23 = (unsigned short)29394;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
