#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1116382151030440660ULL;
unsigned long long int var_7 = 7796543447244331047ULL;
unsigned long long int var_8 = 12495306607540058410ULL;
int zero = 0;
unsigned long long int var_11 = 8217710190992121075ULL;
unsigned long long int var_12 = 10337311829909350838ULL;
unsigned long long int var_13 = 5732680901383669996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
