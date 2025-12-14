#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28077;
unsigned short var_1 = (unsigned short)59219;
short var_3 = (short)-15942;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1715993304203361345LL;
unsigned int var_7 = 3147869324U;
long long int var_8 = 8580216707287776856LL;
unsigned long long int var_9 = 13934257728797808246ULL;
short var_10 = (short)-10026;
int var_11 = 2132895257;
unsigned char var_12 = (unsigned char)239;
unsigned short var_13 = (unsigned short)8512;
short var_14 = (short)-10310;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)32;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
short var_20 = (short)-15882;
long long int var_21 = 8817471354431561337LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
