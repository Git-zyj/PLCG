#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2729985069694526502LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)113;
signed char var_5 = (signed char)76;
unsigned long long int var_7 = 17354211100646234530ULL;
unsigned long long int var_9 = 10299143591623439533ULL;
unsigned short var_11 = (unsigned short)61294;
int zero = 0;
short var_12 = (short)-5630;
unsigned short var_13 = (unsigned short)451;
signed char var_14 = (signed char)-78;
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
