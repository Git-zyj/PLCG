#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20779;
int var_4 = -2079974530;
unsigned int var_6 = 3369336956U;
int var_8 = 1152255139;
unsigned short var_9 = (unsigned short)38688;
int zero = 0;
long long int var_17 = 5198403480818846791LL;
unsigned int var_18 = 1904156562U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
