#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2787200703103740522ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_13 = 1324575348283549359ULL;
short var_15 = (short)-29346;
unsigned long long int var_16 = 18273455031153069414ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3357939892051689236LL;
int var_21 = -317407835;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
