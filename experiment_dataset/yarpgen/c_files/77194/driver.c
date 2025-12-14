#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5580006813075422492LL;
signed char var_8 = (signed char)-124;
unsigned int var_9 = 457261674U;
unsigned int var_12 = 2563354428U;
signed char var_13 = (signed char)107;
long long int var_15 = -8825756761719775112LL;
int zero = 0;
signed char var_17 = (signed char)-99;
unsigned int var_18 = 381628562U;
int var_19 = -784906100;
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
