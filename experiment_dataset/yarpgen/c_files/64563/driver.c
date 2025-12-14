#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1277889201215729421ULL;
unsigned int var_3 = 3661708532U;
int var_7 = -763785278;
short var_8 = (short)-21396;
unsigned short var_9 = (unsigned short)21175;
signed char var_13 = (signed char)39;
int zero = 0;
unsigned int var_15 = 1693398372U;
signed char var_16 = (signed char)-51;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)2415;
unsigned short var_19 = (unsigned short)53443;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
