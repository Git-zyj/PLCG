#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
short var_4 = (short)15733;
unsigned int var_12 = 3023363005U;
unsigned long long int var_15 = 14551189444971651028ULL;
int zero = 0;
unsigned long long int var_17 = 9603367828593911567ULL;
unsigned char var_18 = (unsigned char)209;
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
