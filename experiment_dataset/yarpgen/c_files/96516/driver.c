#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24600;
int var_1 = 1091782125;
int var_3 = -1389359250;
unsigned long long int var_5 = 13991678088824867128ULL;
unsigned int var_8 = 3699161296U;
unsigned int var_13 = 3998119967U;
int zero = 0;
unsigned long long int var_18 = 7141166518354525685ULL;
short var_19 = (short)6153;
unsigned long long int var_20 = 4218592261190052727ULL;
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
