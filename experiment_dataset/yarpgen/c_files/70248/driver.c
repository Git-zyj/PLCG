#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49876;
long long int var_3 = -6234001672820703943LL;
short var_4 = (short)18840;
short var_7 = (short)6661;
long long int var_8 = -2092131954974037059LL;
unsigned short var_12 = (unsigned short)26397;
int zero = 0;
signed char var_13 = (signed char)-110;
unsigned short var_14 = (unsigned short)8864;
unsigned long long int var_15 = 11010126854340878215ULL;
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
