#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2563282739822836810ULL;
unsigned short var_3 = (unsigned short)31362;
unsigned long long int var_6 = 12522606599380055900ULL;
unsigned long long int var_7 = 13550764660675894128ULL;
long long int var_9 = -1036517152750399442LL;
int var_11 = 1356152995;
unsigned int var_13 = 455828013U;
int zero = 0;
unsigned short var_14 = (unsigned short)37230;
long long int var_15 = 1875659062115264747LL;
unsigned long long int var_16 = 15772434191489409091ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
