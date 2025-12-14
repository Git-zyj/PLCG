#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
int var_1 = -1291294844;
unsigned int var_2 = 1921235326U;
int var_5 = 1237805991;
unsigned char var_6 = (unsigned char)62;
unsigned char var_9 = (unsigned char)70;
int zero = 0;
signed char var_11 = (signed char)-31;
signed char var_12 = (signed char)-69;
unsigned long long int var_13 = 15955221385746676224ULL;
signed char var_14 = (signed char)53;
void init() {
}

void checksum() {
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
