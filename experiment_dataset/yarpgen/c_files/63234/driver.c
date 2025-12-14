#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9906;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)51113;
unsigned long long int var_12 = 2668869882960895412ULL;
short var_14 = (short)-7962;
signed char var_15 = (signed char)38;
short var_18 = (short)28908;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)183;
unsigned long long int var_22 = 16138675633678214360ULL;
int var_23 = -283571816;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
