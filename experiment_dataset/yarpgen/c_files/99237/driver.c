#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4188655047722741947ULL;
long long int var_4 = -8176492265598776879LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)54;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 3167057;
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
