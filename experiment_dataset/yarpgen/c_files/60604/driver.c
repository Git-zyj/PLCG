#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5050844507217060215LL;
unsigned char var_2 = (unsigned char)164;
short var_5 = (short)7775;
unsigned long long int var_16 = 8083194674389748811ULL;
short var_17 = (short)-12383;
unsigned char var_18 = (unsigned char)206;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -3459986543577419668LL;
unsigned int var_21 = 2483605721U;
unsigned short var_22 = (unsigned short)8225;
void init() {
}

void checksum() {
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
