#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2061593914;
unsigned short var_2 = (unsigned short)52291;
unsigned long long int var_4 = 2294720698637216863ULL;
int var_7 = 618454308;
unsigned long long int var_9 = 11118666113386070020ULL;
int zero = 0;
short var_16 = (short)13389;
short var_17 = (short)7245;
unsigned long long int var_18 = 5432409327867951515ULL;
int var_19 = 796963900;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
