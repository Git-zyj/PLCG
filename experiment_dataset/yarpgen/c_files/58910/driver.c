#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 731105671188868811ULL;
short var_7 = (short)1009;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)27350;
signed char var_20 = (signed char)-51;
unsigned short var_21 = (unsigned short)9504;
void init() {
}

void checksum() {
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
