#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 293204482U;
unsigned long long int var_6 = 7233850106583036329ULL;
unsigned int var_7 = 456681575U;
unsigned short var_9 = (unsigned short)25532;
int var_15 = -1752937035;
int zero = 0;
int var_16 = -1887621381;
unsigned short var_17 = (unsigned short)44470;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
