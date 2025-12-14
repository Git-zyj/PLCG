#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17061;
short var_4 = (short)-5920;
long long int var_8 = 5649980554849268028LL;
unsigned short var_10 = (unsigned short)23129;
int var_15 = -54425391;
unsigned short var_16 = (unsigned short)18418;
unsigned int var_17 = 4159805817U;
int var_19 = -1684787254;
int zero = 0;
unsigned long long int var_20 = 13791867599232351643ULL;
unsigned long long int var_21 = 5143283833482556069ULL;
long long int var_22 = 1007708495059490817LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
