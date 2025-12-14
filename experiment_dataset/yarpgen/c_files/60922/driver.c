#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28345;
short var_1 = (short)9940;
int var_2 = -1727073204;
unsigned char var_3 = (unsigned char)44;
unsigned char var_4 = (unsigned char)176;
unsigned long long int var_5 = 16731107998157390804ULL;
int var_8 = -2135563378;
int var_9 = 811455294;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1404066914;
long long int var_17 = -5224904373239094790LL;
unsigned long long int var_18 = 16010049128831155649ULL;
long long int var_19 = 3388697046216919063LL;
unsigned int var_20 = 4290599973U;
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
