#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
short var_4 = (short)-20634;
_Bool var_6 = (_Bool)1;
int var_7 = 1625957591;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-30601;
_Bool var_10 = (_Bool)1;
short var_11 = (short)32645;
short var_12 = (short)23620;
unsigned int var_13 = 1799829518U;
int zero = 0;
unsigned int var_16 = 1909135417U;
unsigned long long int var_17 = 13669732183203965379ULL;
int var_18 = -1787723569;
signed char var_19 = (signed char)37;
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
