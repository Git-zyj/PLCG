#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17569291486824815671ULL;
long long int var_2 = -3984710148107466151LL;
unsigned int var_3 = 897830041U;
unsigned short var_6 = (unsigned short)64237;
unsigned long long int var_7 = 6390801843137044395ULL;
int var_9 = -728772116;
unsigned long long int var_10 = 2597224687992277037ULL;
int zero = 0;
unsigned int var_12 = 1515250334U;
short var_13 = (short)-3816;
unsigned int var_14 = 2739787746U;
unsigned short var_15 = (unsigned short)55647;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
