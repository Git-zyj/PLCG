#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4264107782947936616ULL;
long long int var_6 = 6228448636813214148LL;
unsigned short var_8 = (unsigned short)36737;
unsigned int var_16 = 297237079U;
int zero = 0;
unsigned int var_17 = 3030697472U;
unsigned short var_18 = (unsigned short)38279;
unsigned short var_19 = (unsigned short)28882;
long long int var_20 = 4339714921533956555LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
