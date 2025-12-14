#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 7475185999853090590ULL;
unsigned long long int var_3 = 9069194301404536976ULL;
unsigned int var_6 = 2246288105U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-79;
int zero = 0;
int var_10 = 965572844;
int var_11 = 239030919;
short var_12 = (short)-6076;
unsigned long long int var_13 = 6652410001174898497ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
