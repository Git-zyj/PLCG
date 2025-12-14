#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6878196110942660897LL;
short var_7 = (short)20747;
signed char var_9 = (signed char)-110;
unsigned long long int var_10 = 6891436866713990181ULL;
int var_11 = -1357267794;
long long int var_14 = 8703608312488092597LL;
int zero = 0;
int var_15 = 389882994;
short var_16 = (short)-25840;
long long int var_17 = 2874272007226160823LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
