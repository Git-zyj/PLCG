#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8943650199607297073LL;
long long int var_1 = -2874137893937869957LL;
long long int var_2 = 8314894314474200957LL;
long long int var_3 = 440610462886079389LL;
unsigned int var_4 = 1702616095U;
unsigned int var_6 = 1492701200U;
unsigned short var_7 = (unsigned short)52394;
long long int var_8 = 526768951614136480LL;
unsigned short var_9 = (unsigned short)6978;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)58356;
int zero = 0;
unsigned long long int var_12 = 17112172726262682696ULL;
long long int var_13 = -2975505704240708648LL;
unsigned int var_14 = 1682681750U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13078212095549948770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
