#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 642497522U;
signed char var_2 = (signed char)10;
short var_4 = (short)30158;
_Bool var_9 = (_Bool)1;
long long int var_10 = -269243247232994537LL;
_Bool var_11 = (_Bool)0;
int var_16 = -796731274;
int zero = 0;
long long int var_17 = 4801239785200220702LL;
long long int var_18 = -7925710932010438460LL;
_Bool var_19 = (_Bool)0;
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
