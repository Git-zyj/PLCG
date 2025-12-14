#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6793287713763355253ULL;
unsigned long long int var_5 = 2856282953676600288ULL;
int var_7 = 1626326542;
short var_8 = (short)4774;
unsigned char var_9 = (unsigned char)141;
signed char var_10 = (signed char)40;
signed char var_11 = (signed char)91;
signed char var_12 = (signed char)65;
signed char var_13 = (signed char)-50;
int var_14 = -960652972;
int zero = 0;
unsigned long long int var_15 = 7660154173905576865ULL;
long long int var_16 = 5257670730116458481LL;
unsigned int var_17 = 2617342343U;
long long int var_18 = -8016998036402914972LL;
unsigned char var_19 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
