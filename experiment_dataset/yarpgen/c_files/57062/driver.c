#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1301392423;
short var_4 = (short)-9816;
unsigned int var_9 = 3041530542U;
unsigned int var_11 = 195430449U;
int zero = 0;
short var_14 = (short)2273;
unsigned int var_15 = 1424715037U;
int var_16 = 432787057;
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
