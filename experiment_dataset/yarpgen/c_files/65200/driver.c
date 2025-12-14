#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
signed char var_3 = (signed char)-36;
unsigned long long int var_4 = 4320981798067262913ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)387;
signed char var_8 = (signed char)-25;
signed char var_10 = (signed char)-57;
unsigned long long int var_12 = 14875474499075430101ULL;
signed char var_14 = (signed char)-10;
long long int var_15 = 6621958334454972325LL;
_Bool var_16 = (_Bool)1;
long long int var_18 = -5505000113628624226LL;
int zero = 0;
short var_20 = (short)-9502;
unsigned int var_21 = 2258678837U;
unsigned int var_22 = 3096167120U;
unsigned long long int var_23 = 7996278176559889452ULL;
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
