#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1600218910;
unsigned short var_3 = (unsigned short)9830;
signed char var_4 = (signed char)22;
signed char var_7 = (signed char)-93;
unsigned short var_8 = (unsigned short)44724;
unsigned int var_9 = 2391727703U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)115;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)13;
void init() {
}

void checksum() {
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
