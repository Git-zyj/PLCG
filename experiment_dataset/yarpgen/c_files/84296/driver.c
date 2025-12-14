#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24777;
signed char var_12 = (signed char)-57;
long long int var_16 = 8231754488547816568LL;
int zero = 0;
long long int var_18 = -2798172085133353488LL;
long long int var_19 = -4009696293950842103LL;
short var_20 = (short)4013;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
