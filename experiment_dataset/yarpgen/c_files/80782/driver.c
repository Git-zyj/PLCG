#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21021;
unsigned int var_4 = 305428380U;
unsigned long long int var_6 = 5471780275043795899ULL;
unsigned long long int var_9 = 10370301384022977023ULL;
unsigned int var_10 = 1115123788U;
unsigned long long int var_11 = 17422407705528246590ULL;
short var_14 = (short)-12651;
unsigned int var_16 = 3356412668U;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)55;
signed char var_20 = (signed char)-120;
void init() {
}

void checksum() {
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
