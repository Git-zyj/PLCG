#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1355596367676600528LL;
_Bool var_8 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_16 = (short)-17672;
unsigned char var_18 = (unsigned char)182;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8895585547557312274LL;
_Bool var_21 = (_Bool)1;
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
