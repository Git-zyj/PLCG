#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8410844643909010289ULL;
unsigned long long int var_2 = 14934088640129239096ULL;
long long int var_4 = 558944151010995500LL;
long long int var_7 = -4471333079399413415LL;
int zero = 0;
long long int var_13 = 5960264366292815660LL;
unsigned long long int var_14 = 308632620919969026ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
