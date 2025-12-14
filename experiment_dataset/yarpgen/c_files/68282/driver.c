#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-21754;
unsigned char var_8 = (unsigned char)108;
signed char var_10 = (signed char)-37;
unsigned long long int var_11 = 11120659018623525564ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 1325985568;
short var_15 = (short)-28213;
unsigned short var_16 = (unsigned short)44810;
unsigned long long int var_17 = 17028667714558710105ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
