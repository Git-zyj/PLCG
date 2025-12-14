#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6644;
unsigned long long int var_1 = 14605296883314433269ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-19575;
signed char var_9 = (signed char)-65;
int var_11 = 1044678219;
int zero = 0;
signed char var_14 = (signed char)73;
int var_15 = 1176399697;
unsigned long long int var_16 = 8540372688708941930ULL;
void init() {
}

void checksum() {
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
