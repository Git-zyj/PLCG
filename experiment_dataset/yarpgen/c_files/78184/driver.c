#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 772105984U;
unsigned short var_6 = (unsigned short)52808;
unsigned int var_9 = 3581535811U;
unsigned short var_10 = (unsigned short)25896;
unsigned long long int var_11 = 15037292052281096673ULL;
int zero = 0;
unsigned long long int var_13 = 4256295446098855121ULL;
unsigned int var_14 = 3127884386U;
int var_15 = -1819261416;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
