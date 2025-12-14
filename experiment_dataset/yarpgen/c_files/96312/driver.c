#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1639817380908582345LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7250221667829117293LL;
unsigned int var_11 = 3330207155U;
long long int var_12 = 5368569240385748788LL;
signed char var_13 = (signed char)3;
int zero = 0;
unsigned int var_14 = 3033462317U;
unsigned int var_15 = 3605505111U;
unsigned int var_16 = 3165437930U;
long long int var_17 = -6876837520572092177LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
