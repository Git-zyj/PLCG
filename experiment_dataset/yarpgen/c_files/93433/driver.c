#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13498487906833194365ULL;
unsigned char var_2 = (unsigned char)182;
int var_3 = -1192711604;
unsigned int var_5 = 1776129383U;
long long int var_7 = 2003123343196827633LL;
unsigned short var_9 = (unsigned short)39153;
signed char var_10 = (signed char)124;
unsigned long long int var_11 = 11771499211305796308ULL;
int zero = 0;
int var_13 = -385569126;
long long int var_14 = 5768644486433979101LL;
unsigned char var_15 = (unsigned char)71;
void init() {
}

void checksum() {
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
