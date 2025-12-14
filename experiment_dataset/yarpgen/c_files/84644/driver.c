#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
long long int var_6 = -5377655603552907674LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 2629039373019361398LL;
unsigned short var_12 = (unsigned short)33229;
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
