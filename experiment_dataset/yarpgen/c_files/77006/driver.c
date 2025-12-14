#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1827595186932356263ULL;
signed char var_1 = (signed char)-81;
unsigned short var_3 = (unsigned short)6997;
short var_5 = (short)21863;
unsigned short var_6 = (unsigned short)18242;
unsigned short var_7 = (unsigned short)16806;
signed char var_10 = (signed char)40;
unsigned long long int var_11 = 14436200319130834300ULL;
int zero = 0;
long long int var_13 = 1372148675286935976LL;
_Bool var_14 = (_Bool)1;
int var_15 = 1830594838;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
