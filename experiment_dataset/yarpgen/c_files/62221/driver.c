#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10724908081571523524ULL;
signed char var_4 = (signed char)29;
signed char var_5 = (signed char)-81;
unsigned int var_6 = 3998856529U;
unsigned short var_7 = (unsigned short)59812;
unsigned short var_10 = (unsigned short)25494;
signed char var_14 = (signed char)110;
unsigned short var_15 = (unsigned short)61241;
signed char var_16 = (signed char)17;
unsigned short var_17 = (unsigned short)21972;
int zero = 0;
long long int var_18 = 279558974013540395LL;
unsigned char var_19 = (unsigned char)195;
signed char var_20 = (signed char)42;
unsigned long long int var_21 = 16585721691799519412ULL;
unsigned int var_22 = 54309274U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
