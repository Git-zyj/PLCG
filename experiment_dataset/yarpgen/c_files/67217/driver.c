#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16143;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)172;
_Bool var_7 = (_Bool)0;
short var_9 = (short)851;
int zero = 0;
unsigned int var_13 = 2259964668U;
unsigned long long int var_14 = 8771484012332068276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
