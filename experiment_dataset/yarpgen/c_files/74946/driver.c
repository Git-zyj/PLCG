#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
int var_3 = -1945604146;
signed char var_5 = (signed char)6;
signed char var_7 = (signed char)98;
int var_13 = 152261684;
short var_14 = (short)-17389;
long long int var_15 = 4400494242436666092LL;
unsigned long long int var_16 = 16545641254780987197ULL;
int var_18 = 275023868;
unsigned int var_19 = 3724771713U;
int zero = 0;
unsigned short var_20 = (unsigned short)15324;
unsigned long long int var_21 = 5250956535872620062ULL;
unsigned long long int var_22 = 1511678378511664300ULL;
unsigned int var_23 = 3452694839U;
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
