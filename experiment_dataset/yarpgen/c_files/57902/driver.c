#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_7 = -5035751562078287784LL;
int var_8 = 358997932;
unsigned int var_9 = 2185443405U;
long long int var_10 = 7023404644624014587LL;
int var_11 = -1305810238;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)35;
unsigned char var_15 = (unsigned char)245;
int var_16 = -1964604641;
void init() {
}

void checksum() {
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
