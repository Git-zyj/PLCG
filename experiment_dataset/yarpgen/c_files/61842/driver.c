#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_13 = -482369759;
unsigned long long int var_19 = 13584919905523980805ULL;
int zero = 0;
int var_20 = 559202324;
unsigned long long int var_21 = 3985213652225876076ULL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -3387980045628101071LL;
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
