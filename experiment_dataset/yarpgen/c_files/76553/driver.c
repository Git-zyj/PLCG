#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 250959789;
unsigned char var_6 = (unsigned char)179;
_Bool var_11 = (_Bool)1;
int var_12 = -247634703;
int zero = 0;
unsigned char var_17 = (unsigned char)68;
int var_18 = -1889560195;
unsigned long long int var_19 = 10918737967311711421ULL;
void init() {
}

void checksum() {
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
