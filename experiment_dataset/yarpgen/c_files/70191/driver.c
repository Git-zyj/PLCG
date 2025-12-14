#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)27016;
int var_5 = 730881568;
short var_6 = (short)9874;
unsigned long long int var_8 = 8103873839096771013ULL;
unsigned int var_10 = 695099530U;
long long int var_12 = 3962097847953567628LL;
short var_14 = (short)-28546;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)211;
unsigned int var_20 = 2932712463U;
short var_21 = (short)18685;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
