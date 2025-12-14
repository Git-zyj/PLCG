#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1050263830;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)32622;
unsigned short var_5 = (unsigned short)54995;
unsigned short var_6 = (unsigned short)46645;
unsigned long long int var_8 = 5494603676835487514ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39631;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)16152;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
