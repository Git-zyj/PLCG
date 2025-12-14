#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12150111959268724086ULL;
short var_2 = (short)6299;
unsigned long long int var_4 = 10178759829552141921ULL;
int var_5 = 397948692;
int var_10 = -782040800;
unsigned long long int var_12 = 15217439086505122120ULL;
long long int var_16 = 7099201699855805774LL;
int var_18 = -1058464656;
int zero = 0;
unsigned short var_20 = (unsigned short)13394;
short var_21 = (short)-30290;
unsigned int var_22 = 867035341U;
int var_23 = -513710069;
signed char var_24 = (signed char)-58;
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
