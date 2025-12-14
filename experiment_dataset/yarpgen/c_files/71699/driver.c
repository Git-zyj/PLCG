#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3631820501U;
signed char var_11 = (signed char)-12;
unsigned long long int var_13 = 15050657952234564207ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)49632;
signed char var_18 = (signed char)-115;
void init() {
}

void checksum() {
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
