#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2977332368967928020LL;
unsigned char var_1 = (unsigned char)77;
unsigned short var_2 = (unsigned short)61786;
long long int var_4 = 2007015867405510256LL;
unsigned short var_6 = (unsigned short)12773;
unsigned int var_10 = 3684626037U;
unsigned short var_11 = (unsigned short)63152;
long long int var_16 = -5038128202668782943LL;
int zero = 0;
int var_17 = -1786190520;
unsigned short var_18 = (unsigned short)32382;
int var_19 = -1898250427;
void init() {
}

void checksum() {
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
