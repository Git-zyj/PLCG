#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5149853157345595091LL;
short var_6 = (short)-16483;
long long int var_12 = -8855520595170417901LL;
unsigned long long int var_15 = 17931530715543163313ULL;
unsigned long long int var_17 = 5696624434820956018ULL;
int zero = 0;
long long int var_18 = -2412724011991598012LL;
unsigned int var_19 = 1491761047U;
long long int var_20 = 1359547211507757288LL;
long long int var_21 = -656785083194828984LL;
int var_22 = 1261267788;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
