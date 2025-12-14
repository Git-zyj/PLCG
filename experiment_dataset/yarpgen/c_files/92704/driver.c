#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1046732529U;
int var_5 = -913670569;
unsigned int var_11 = 3634392309U;
int zero = 0;
long long int var_18 = -8072690053214198694LL;
int var_19 = -319548498;
unsigned long long int var_20 = 2888279709085943367ULL;
long long int var_21 = -697118152768632000LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
