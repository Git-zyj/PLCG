#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-124;
unsigned int var_6 = 3342438720U;
signed char var_7 = (signed char)125;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3142019372U;
unsigned char var_10 = (unsigned char)153;
unsigned char var_11 = (unsigned char)191;
int zero = 0;
unsigned int var_15 = 814539775U;
int var_16 = -994651820;
unsigned short var_17 = (unsigned short)41594;
unsigned short var_18 = (unsigned short)55075;
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
