#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
unsigned short var_2 = (unsigned short)17583;
int var_3 = 1765601602;
long long int var_4 = -8985728942698664667LL;
unsigned long long int var_11 = 10676230106331776182ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 224243559U;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2190880158U;
unsigned int var_19 = 1263374763U;
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
