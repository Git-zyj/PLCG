#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
int var_3 = 1675113515;
unsigned long long int var_5 = 8632605791068237932ULL;
unsigned short var_7 = (unsigned short)38427;
long long int var_8 = 7587625811653460843LL;
unsigned int var_9 = 2823210398U;
unsigned int var_10 = 3329653409U;
int zero = 0;
unsigned int var_14 = 291508567U;
signed char var_15 = (signed char)-55;
long long int var_16 = 4246017170974620559LL;
unsigned int var_17 = 2868152597U;
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
