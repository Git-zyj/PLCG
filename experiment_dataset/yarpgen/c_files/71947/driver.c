#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
unsigned char var_1 = (unsigned char)147;
_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3351964223040007589LL;
unsigned long long int var_10 = 5574071692618573353ULL;
unsigned short var_11 = (unsigned short)9972;
int zero = 0;
unsigned long long int var_12 = 5069316022930008062ULL;
unsigned short var_13 = (unsigned short)27930;
long long int var_14 = 5692036494047038404LL;
unsigned long long int var_15 = 18057338132164091406ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
