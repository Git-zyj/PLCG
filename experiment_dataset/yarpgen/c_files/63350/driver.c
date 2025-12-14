#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)15;
long long int var_13 = 7656075686401807317LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -2116900097;
unsigned long long int var_22 = 6976831039350211379ULL;
unsigned long long int var_23 = 9602522471759244423ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
