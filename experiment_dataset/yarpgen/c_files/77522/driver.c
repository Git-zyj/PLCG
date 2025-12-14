#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1116868306;
unsigned int var_3 = 2662792522U;
unsigned int var_6 = 2492267581U;
signed char var_10 = (signed char)-106;
long long int var_12 = -7779610075418788067LL;
signed char var_13 = (signed char)72;
int zero = 0;
int var_16 = 1929697240;
unsigned int var_17 = 498303337U;
long long int var_18 = 906120575268504972LL;
unsigned short var_19 = (unsigned short)53278;
signed char var_20 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
