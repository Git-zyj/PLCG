#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3634810498U;
signed char var_5 = (signed char)-26;
unsigned long long int var_9 = 1990349125596620515ULL;
long long int var_11 = 8540876710780009435LL;
int zero = 0;
long long int var_13 = -6704689388235247086LL;
unsigned int var_14 = 1359115418U;
unsigned long long int var_15 = 13055939949840797423ULL;
unsigned short var_16 = (unsigned short)49880;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
