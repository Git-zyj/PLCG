#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_5 = -8516432351057351918LL;
unsigned int var_6 = 3609950490U;
long long int var_7 = 2458620285148435505LL;
unsigned short var_9 = (unsigned short)27959;
unsigned char var_15 = (unsigned char)233;
long long int var_17 = -6746876971371467285LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)164;
_Bool var_20 = (_Bool)0;
int var_21 = -1892322419;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
