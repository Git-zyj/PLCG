#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13977526482136487894ULL;
long long int var_3 = -463749967437852882LL;
int var_5 = -1364839530;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 13750374602312083356ULL;
unsigned char var_12 = (unsigned char)215;
int var_13 = 898791683;
signed char var_17 = (signed char)-101;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)21535;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
