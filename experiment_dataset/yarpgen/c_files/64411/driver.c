#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8486812144005635438LL;
unsigned long long int var_1 = 5087999825677728833ULL;
unsigned short var_6 = (unsigned short)6424;
unsigned char var_7 = (unsigned char)214;
unsigned short var_9 = (unsigned short)63862;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13320985388257742850ULL;
long long int var_19 = 2375371234454149233LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
