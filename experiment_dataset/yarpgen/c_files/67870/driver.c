#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1478514728;
int var_8 = 391726233;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -8125450181964788168LL;
int var_12 = -1656728906;
long long int var_13 = -7736751690752520454LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
