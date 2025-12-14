#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1580174211;
unsigned int var_2 = 1919926166U;
unsigned int var_6 = 744711313U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 14143841468910059515ULL;
int zero = 0;
unsigned int var_14 = 2805657537U;
long long int var_15 = -3476670444548807194LL;
void init() {
}

void checksum() {
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
