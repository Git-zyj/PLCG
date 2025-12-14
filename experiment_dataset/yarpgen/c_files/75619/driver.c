#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10026;
signed char var_5 = (signed char)-76;
unsigned long long int var_11 = 18079122711130488412ULL;
int var_14 = 476948386;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)9585;
long long int var_18 = -2264226975065567036LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
