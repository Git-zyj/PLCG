#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10702859048057179717ULL;
_Bool var_2 = (_Bool)1;
long long int var_12 = -8990073067264163570LL;
int zero = 0;
unsigned long long int var_16 = 12913386841188593630ULL;
long long int var_17 = 4092260073713004596LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
