#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -950875517;
int zero = 0;
unsigned long long int var_10 = 10621019402625194057ULL;
unsigned int var_11 = 286042355U;
unsigned long long int var_12 = 7418983392049800124ULL;
unsigned short var_13 = (unsigned short)30519;
int var_14 = -356922308;
short var_15 = (short)-29523;
int var_16 = 1030728090;
unsigned short var_17 = (unsigned short)27344;
int var_18 = -1527025404;
unsigned short var_19 = (unsigned short)21271;
int var_20 = -1285244972;
long long int var_21 = 7654313459236798759LL;
unsigned short var_22 = (unsigned short)9923;
int var_23 = -1569201265;
signed char var_24 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
