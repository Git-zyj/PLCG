#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-43;
int var_6 = -637110592;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 716860289U;
short var_10 = (short)-3306;
int var_13 = -1875778790;
signed char var_15 = (signed char)27;
int zero = 0;
short var_16 = (short)7486;
unsigned short var_17 = (unsigned short)25101;
unsigned long long int var_18 = 946790625946169108ULL;
void init() {
}

void checksum() {
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
