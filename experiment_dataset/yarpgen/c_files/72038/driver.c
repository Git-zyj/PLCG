#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36900;
int var_1 = 556557729;
unsigned short var_2 = (unsigned short)32905;
unsigned char var_3 = (unsigned char)151;
long long int var_6 = 4597365160258627693LL;
int var_7 = -987043026;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)222;
long long int var_12 = 2553920781350833275LL;
int var_14 = -537217971;
int zero = 0;
unsigned int var_16 = 34632419U;
unsigned char var_17 = (unsigned char)114;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5160923151922039967LL;
void init() {
}

void checksum() {
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
