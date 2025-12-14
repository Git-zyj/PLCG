#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61852;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8194224777027560738ULL;
unsigned short var_4 = (unsigned short)52601;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1684827361784948545LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 1577605297410879054ULL;
unsigned short var_16 = (unsigned short)48206;
unsigned long long int var_17 = 2719215791942658881ULL;
unsigned long long int var_18 = 5139319840888706751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
