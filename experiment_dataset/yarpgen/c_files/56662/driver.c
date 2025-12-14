#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)41;
_Bool var_3 = (_Bool)0;
short var_4 = (short)28045;
unsigned long long int var_5 = 10019336356448825949ULL;
unsigned char var_6 = (unsigned char)171;
unsigned short var_9 = (unsigned short)65434;
unsigned long long int var_10 = 16090722194588479570ULL;
unsigned char var_11 = (unsigned char)130;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)32477;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
