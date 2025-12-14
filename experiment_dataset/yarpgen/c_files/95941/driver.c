#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_13 = -7322844418400838399LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -183727364882736860LL;
int zero = 0;
signed char var_20 = (signed char)-10;
long long int var_21 = -4026144094127027430LL;
long long int var_22 = -3849558771185626013LL;
long long int var_23 = -8970321569478793815LL;
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
