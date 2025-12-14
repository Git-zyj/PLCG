#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25963;
unsigned short var_11 = (unsigned short)38056;
unsigned int var_13 = 2110095476U;
int var_16 = 2114069243;
int zero = 0;
unsigned int var_17 = 1556820158U;
unsigned short var_18 = (unsigned short)50626;
unsigned int var_19 = 468777599U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
