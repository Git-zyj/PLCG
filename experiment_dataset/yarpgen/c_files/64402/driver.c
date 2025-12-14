#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7787583424438694885LL;
long long int var_5 = 3155663595236430204LL;
unsigned char var_7 = (unsigned char)86;
_Bool var_8 = (_Bool)0;
int var_17 = -70167541;
int zero = 0;
long long int var_18 = -1066636208634869705LL;
long long int var_19 = -5079698028518248759LL;
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
