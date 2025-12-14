#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10127723856756078352ULL;
short var_2 = (short)12995;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 96846471;
short var_12 = (short)19556;
unsigned long long int var_13 = 366632306932014416ULL;
unsigned short var_14 = (unsigned short)37987;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
