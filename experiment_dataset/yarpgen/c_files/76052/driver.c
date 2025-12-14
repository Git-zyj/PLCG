#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7447;
signed char var_5 = (signed char)17;
unsigned char var_6 = (unsigned char)79;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 13318418624787616724ULL;
signed char var_18 = (signed char)-12;
int zero = 0;
long long int var_20 = 4540687383709523117LL;
unsigned short var_21 = (unsigned short)2454;
long long int var_22 = 950449756217265937LL;
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
