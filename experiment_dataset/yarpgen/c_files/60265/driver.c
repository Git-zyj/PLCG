#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)18;
_Bool var_7 = (_Bool)1;
int var_8 = -1548074754;
signed char var_11 = (signed char)-49;
int zero = 0;
long long int var_12 = -1101589354542456579LL;
int var_13 = 2120705403;
unsigned short var_14 = (unsigned short)25883;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
