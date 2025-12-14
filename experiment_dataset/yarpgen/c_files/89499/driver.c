#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 38887718;
long long int var_8 = -7927820476609422670LL;
int var_11 = -1160103839;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-21099;
long long int var_21 = -7299848948888476736LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
