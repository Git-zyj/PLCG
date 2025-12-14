#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 793111166542037369ULL;
signed char var_2 = (signed char)72;
signed char var_5 = (signed char)-86;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)45;
int zero = 0;
unsigned long long int var_14 = 11610335486055982879ULL;
signed char var_15 = (signed char)-93;
signed char var_16 = (signed char)-62;
int var_17 = -1837130582;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
