#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13512305324666683585ULL;
unsigned long long int var_10 = 11491959242319924292ULL;
long long int var_13 = -6405558326123166514LL;
int zero = 0;
long long int var_17 = 3416744469698807205LL;
long long int var_18 = 7171560555313324156LL;
unsigned long long int var_19 = 11048454774519140250ULL;
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
