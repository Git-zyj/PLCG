#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4266;
_Bool var_5 = (_Bool)1;
short var_6 = (short)9160;
unsigned long long int var_7 = 10787433953010031094ULL;
_Bool var_11 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int var_18 = 39241682;
int zero = 0;
int var_20 = -1547949856;
signed char var_21 = (signed char)122;
short var_22 = (short)-5892;
unsigned char var_23 = (unsigned char)239;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
