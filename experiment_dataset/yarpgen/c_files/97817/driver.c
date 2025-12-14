#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2721462979U;
unsigned short var_2 = (unsigned short)61940;
short var_6 = (short)-8581;
unsigned long long int var_7 = 4395350963988419869ULL;
unsigned long long int var_8 = 5985100153995156529ULL;
long long int var_11 = -6395143036178292025LL;
unsigned int var_13 = 1653038601U;
unsigned long long int var_14 = 14877047765549713082ULL;
int zero = 0;
long long int var_16 = 3040547083990337808LL;
unsigned long long int var_17 = 1288552252870811093ULL;
unsigned short var_18 = (unsigned short)63299;
unsigned long long int var_19 = 10279942822163917071ULL;
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
