#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4234713871U;
unsigned long long int var_2 = 14113255963336077560ULL;
signed char var_4 = (signed char)54;
unsigned long long int var_7 = 15741454806208585230ULL;
unsigned long long int var_9 = 2280946174057601813ULL;
unsigned char var_10 = (unsigned char)208;
long long int var_11 = -8703491506251920859LL;
int zero = 0;
short var_12 = (short)-1854;
unsigned short var_13 = (unsigned short)32657;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1126544579689988747ULL;
unsigned short var_16 = (unsigned short)18060;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
