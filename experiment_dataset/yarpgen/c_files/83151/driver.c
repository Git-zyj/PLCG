#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -673305605;
unsigned long long int var_4 = 15475735472923656569ULL;
long long int var_7 = 4692871273105084816LL;
unsigned short var_9 = (unsigned short)1105;
unsigned short var_10 = (unsigned short)35674;
int var_17 = 1434597008;
int zero = 0;
int var_19 = 616990137;
unsigned short var_20 = (unsigned short)60420;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
