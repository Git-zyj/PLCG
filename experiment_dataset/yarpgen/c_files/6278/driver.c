#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4959103168276702300LL;
signed char var_4 = (signed char)-80;
signed char var_6 = (signed char)122;
int var_7 = 480537645;
unsigned char var_8 = (unsigned char)26;
long long int var_10 = -6532349693601527733LL;
signed char var_13 = (signed char)105;
unsigned char var_14 = (unsigned char)21;
unsigned long long int var_15 = 3552457178867892576ULL;
int zero = 0;
int var_20 = 229416537;
long long int var_21 = -2154672764271351097LL;
short var_22 = (short)-8697;
unsigned short var_23 = (unsigned short)55434;
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
