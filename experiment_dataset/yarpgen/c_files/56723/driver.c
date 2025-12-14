#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1785901332;
unsigned char var_3 = (unsigned char)241;
signed char var_7 = (signed char)-52;
int var_10 = 1457674092;
short var_12 = (short)27613;
unsigned long long int var_18 = 600532180274985990ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)16440;
unsigned long long int var_21 = 10860267604766733629ULL;
unsigned char var_22 = (unsigned char)43;
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
