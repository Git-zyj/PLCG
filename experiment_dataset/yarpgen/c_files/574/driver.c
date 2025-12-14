#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18569;
long long int var_3 = 1468388139138424830LL;
long long int var_11 = -295541798601387158LL;
int zero = 0;
unsigned long long int var_14 = 11773070053805986601ULL;
unsigned int var_15 = 1603763431U;
unsigned short var_16 = (unsigned short)38205;
unsigned long long int var_17 = 7742618990810515154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
