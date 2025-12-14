#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
_Bool var_2 = (_Bool)0;
long long int var_4 = -19223958108795035LL;
long long int var_6 = -7090504564056261688LL;
int var_16 = -820797354;
int zero = 0;
unsigned long long int var_17 = 3475909187470615789ULL;
unsigned char var_18 = (unsigned char)171;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
