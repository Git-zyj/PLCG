#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
signed char var_1 = (signed char)-38;
unsigned long long int var_4 = 257637159511690570ULL;
unsigned int var_5 = 1472677874U;
unsigned int var_6 = 2223753954U;
unsigned short var_10 = (unsigned short)8895;
int zero = 0;
unsigned int var_15 = 378914211U;
signed char var_16 = (signed char)-35;
signed char var_17 = (signed char)111;
void init() {
}

void checksum() {
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
