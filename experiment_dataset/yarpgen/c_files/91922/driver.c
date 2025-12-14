#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2072099230;
long long int var_1 = -7279320611372538575LL;
signed char var_3 = (signed char)-24;
unsigned int var_10 = 4100762994U;
long long int var_11 = 8888114662381575349LL;
long long int var_13 = -8406927197570543690LL;
int var_14 = -1558743904;
long long int var_15 = -2912493130241438644LL;
unsigned short var_17 = (unsigned short)52410;
int zero = 0;
long long int var_20 = -5980134347911034956LL;
long long int var_21 = 8186541571183972822LL;
unsigned int var_22 = 2598783364U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
