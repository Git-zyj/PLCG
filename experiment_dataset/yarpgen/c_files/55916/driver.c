#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6621551843947232091LL;
unsigned int var_4 = 797864068U;
signed char var_5 = (signed char)-63;
unsigned short var_7 = (unsigned short)28593;
unsigned short var_9 = (unsigned short)34054;
short var_15 = (short)-16867;
int zero = 0;
unsigned long long int var_18 = 5597377662481349629ULL;
signed char var_19 = (signed char)102;
void init() {
}

void checksum() {
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
