#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
int var_2 = 1455409481;
unsigned short var_4 = (unsigned short)30790;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-18483;
unsigned int var_11 = 1740098711U;
unsigned int var_14 = 2864220683U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)27173;
unsigned int var_18 = 281424998U;
unsigned int var_19 = 1151215778U;
short var_20 = (short)-13872;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
