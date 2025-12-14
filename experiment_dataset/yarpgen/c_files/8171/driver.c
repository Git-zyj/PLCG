#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
int var_3 = -1500740590;
unsigned int var_6 = 3259005216U;
signed char var_9 = (signed char)-84;
unsigned int var_10 = 648215287U;
int zero = 0;
unsigned int var_18 = 22093837U;
unsigned int var_19 = 4211747104U;
unsigned long long int var_20 = 11623387370046338563ULL;
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
