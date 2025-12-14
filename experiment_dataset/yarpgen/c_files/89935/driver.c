#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28652;
long long int var_3 = 1626435584943716426LL;
signed char var_4 = (signed char)39;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 10980581063222865520ULL;
long long int var_19 = 3081826901529052042LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
