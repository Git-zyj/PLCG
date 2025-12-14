#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22207;
unsigned long long int var_2 = 16429337416033886994ULL;
unsigned short var_3 = (unsigned short)25431;
int var_5 = 1816217054;
long long int var_7 = -6278964700940232586LL;
unsigned short var_8 = (unsigned short)19442;
long long int var_9 = 5608346867224906190LL;
int var_10 = 1862643021;
unsigned short var_14 = (unsigned short)30714;
int var_15 = 708043692;
int zero = 0;
signed char var_17 = (signed char)-27;
unsigned short var_18 = (unsigned short)43895;
unsigned short var_19 = (unsigned short)54463;
unsigned short var_20 = (unsigned short)3022;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
