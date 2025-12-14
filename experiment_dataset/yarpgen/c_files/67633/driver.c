#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22664;
short var_7 = (short)25876;
int var_8 = -178955997;
signed char var_11 = (signed char)-39;
int var_13 = 671303717;
int zero = 0;
int var_16 = -1941397605;
unsigned short var_17 = (unsigned short)17543;
short var_18 = (short)-23097;
int var_19 = 1759661165;
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
