#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1995218823;
signed char var_3 = (signed char)29;
signed char var_4 = (signed char)11;
unsigned long long int var_8 = 12552567449606817326ULL;
unsigned long long int var_9 = 7940329714537077565ULL;
long long int var_13 = 1112345545598361241LL;
int zero = 0;
unsigned short var_14 = (unsigned short)45116;
unsigned long long int var_15 = 12665807221266558131ULL;
void init() {
}

void checksum() {
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
