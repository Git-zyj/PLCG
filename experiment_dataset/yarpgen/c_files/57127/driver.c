#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1831115501;
signed char var_3 = (signed char)-121;
unsigned short var_9 = (unsigned short)18612;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)31726;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6161862712228131802LL;
long long int var_15 = 1800040936045611898LL;
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
