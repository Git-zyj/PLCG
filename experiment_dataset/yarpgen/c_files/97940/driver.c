#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2889706204101624856LL;
long long int var_2 = -2181165958764027120LL;
long long int var_3 = -3285504097423458428LL;
long long int var_4 = 3766441124924630151LL;
int var_5 = 1236519052;
int zero = 0;
long long int var_10 = 6500589073093761887LL;
int var_11 = 832451661;
long long int var_12 = -3089183475155548946LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
