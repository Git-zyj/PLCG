#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5394464669571206116ULL;
unsigned short var_1 = (unsigned short)50959;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 480668455406308705ULL;
unsigned long long int var_8 = 6066386468448033149ULL;
int var_10 = -103090749;
signed char var_12 = (signed char)-4;
short var_14 = (short)-2164;
int zero = 0;
int var_17 = 1822666870;
unsigned char var_18 = (unsigned char)104;
unsigned short var_19 = (unsigned short)37630;
signed char var_20 = (signed char)50;
void init() {
}

void checksum() {
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
