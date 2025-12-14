#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56742;
unsigned short var_4 = (unsigned short)31345;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-94;
short var_8 = (short)25467;
int var_9 = 1715341685;
unsigned int var_10 = 3882563582U;
unsigned short var_12 = (unsigned short)29735;
signed char var_13 = (signed char)-50;
int zero = 0;
signed char var_14 = (signed char)-119;
signed char var_15 = (signed char)77;
short var_16 = (short)14005;
unsigned long long int var_17 = 17630386613612683718ULL;
unsigned long long int var_18 = 11346252156992222300ULL;
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
