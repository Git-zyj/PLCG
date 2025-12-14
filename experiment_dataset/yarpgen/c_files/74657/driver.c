#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14878654860255235569ULL;
unsigned long long int var_2 = 2707416046097722709ULL;
unsigned short var_4 = (unsigned short)34725;
signed char var_7 = (signed char)12;
unsigned char var_8 = (unsigned char)36;
int var_11 = 252638800;
int zero = 0;
long long int var_16 = 482402297011685589LL;
long long int var_17 = 492899282156137535LL;
unsigned long long int var_18 = 9278796636230930275ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13134997638499195397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
