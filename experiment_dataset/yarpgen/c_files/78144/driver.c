#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1260445684;
unsigned long long int var_5 = 360419610145311392ULL;
unsigned long long int var_8 = 16327459838954384294ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-27618;
int var_12 = 1849655099;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
