#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29272;
unsigned long long int var_2 = 2382447593707136584ULL;
short var_5 = (short)20796;
unsigned char var_7 = (unsigned char)138;
short var_8 = (short)18489;
unsigned short var_9 = (unsigned short)42587;
short var_10 = (short)-30741;
_Bool var_11 = (_Bool)0;
short var_13 = (short)1356;
int zero = 0;
signed char var_14 = (signed char)34;
unsigned long long int var_15 = 16852439073820274799ULL;
unsigned long long int var_16 = 8637412799287146447ULL;
int var_17 = 327129902;
int var_18 = 1950537372;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
