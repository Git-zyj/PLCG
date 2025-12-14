#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)3037;
unsigned short var_5 = (unsigned short)16121;
unsigned long long int var_7 = 6080209749032162154ULL;
short var_8 = (short)-13286;
signed char var_9 = (signed char)27;
long long int var_14 = 5294112621919433196LL;
int zero = 0;
unsigned long long int var_15 = 11553642062697280422ULL;
int var_16 = -10940659;
int var_17 = 641285290;
long long int var_18 = 1768076753827352654LL;
void init() {
}

void checksum() {
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
