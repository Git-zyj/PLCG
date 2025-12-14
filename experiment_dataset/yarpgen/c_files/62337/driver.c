#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7357;
long long int var_3 = -5399115311726845831LL;
long long int var_4 = 8254621859634259309LL;
unsigned long long int var_6 = 16095636885928436687ULL;
long long int var_8 = -2933904171922368481LL;
short var_9 = (short)32082;
unsigned char var_10 = (unsigned char)108;
long long int var_11 = -2519186354706877179LL;
unsigned long long int var_15 = 15421072548745508477ULL;
unsigned int var_16 = 2521574962U;
short var_17 = (short)-15008;
long long int var_18 = 715034994291979881LL;
int zero = 0;
short var_19 = (short)3110;
short var_20 = (short)-8677;
void init() {
}

void checksum() {
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
