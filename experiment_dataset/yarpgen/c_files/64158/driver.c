#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 306164866;
unsigned char var_1 = (unsigned char)196;
unsigned char var_3 = (unsigned char)134;
int var_7 = 552700248;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)51411;
unsigned short var_17 = (unsigned short)64632;
int zero = 0;
signed char var_18 = (signed char)-99;
unsigned short var_19 = (unsigned short)55254;
signed char var_20 = (signed char)-56;
unsigned short var_21 = (unsigned short)14946;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
