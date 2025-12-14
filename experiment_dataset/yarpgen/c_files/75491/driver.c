#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10341676063526245118ULL;
_Bool var_5 = (_Bool)1;
int var_8 = 1937168391;
long long int var_10 = 2730503279094115409LL;
unsigned char var_14 = (unsigned char)10;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)29190;
unsigned long long int var_19 = 3676242864487507509ULL;
unsigned char var_20 = (unsigned char)3;
long long int var_21 = 1249921356653212836LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
