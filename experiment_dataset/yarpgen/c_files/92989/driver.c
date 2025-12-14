#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4271361066U;
short var_2 = (short)23193;
short var_3 = (short)-10984;
_Bool var_5 = (_Bool)0;
short var_7 = (short)24131;
signed char var_9 = (signed char)79;
short var_12 = (short)-3943;
int zero = 0;
long long int var_14 = -1897764824782869137LL;
unsigned int var_15 = 1737752698U;
signed char var_16 = (signed char)95;
short var_17 = (short)-27337;
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
