#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -786678763;
unsigned short var_1 = (unsigned short)31664;
unsigned short var_2 = (unsigned short)5486;
unsigned short var_4 = (unsigned short)54059;
int var_5 = -1045728324;
int var_6 = 1660907837;
unsigned int var_7 = 810330703U;
unsigned int var_8 = 682722658U;
unsigned int var_9 = 508148263U;
unsigned int var_10 = 225254710U;
unsigned int var_12 = 451635227U;
unsigned int var_13 = 4162314381U;
int zero = 0;
unsigned short var_14 = (unsigned short)17503;
int var_15 = 1552129667;
unsigned int var_16 = 2196614254U;
int var_17 = 1569848642;
unsigned int var_18 = 2977024491U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
