#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -237774196;
short var_1 = (short)32722;
signed char var_2 = (signed char)-6;
unsigned long long int var_3 = 1420831595527185636ULL;
unsigned long long int var_4 = 6651311772692971443ULL;
unsigned long long int var_5 = 15048527577095845219ULL;
unsigned int var_6 = 2752655422U;
short var_7 = (short)-17463;
int zero = 0;
short var_11 = (short)-3008;
unsigned long long int var_12 = 8772667393625616774ULL;
int var_13 = 796912665;
unsigned long long int var_14 = 477711742863521674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
