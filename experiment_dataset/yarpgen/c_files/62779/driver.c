#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33650;
unsigned short var_2 = (unsigned short)37557;
short var_3 = (short)27245;
short var_4 = (short)-29720;
unsigned short var_5 = (unsigned short)32377;
short var_9 = (short)29935;
unsigned long long int var_11 = 2790691480734027273ULL;
unsigned int var_14 = 886906423U;
long long int var_18 = -4666383052525120703LL;
int zero = 0;
unsigned long long int var_19 = 2299532854913835811ULL;
unsigned short var_20 = (unsigned short)11765;
long long int var_21 = 1896545950910085928LL;
unsigned short var_22 = (unsigned short)63069;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
