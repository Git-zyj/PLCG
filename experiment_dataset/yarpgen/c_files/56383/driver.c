#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3049162151U;
signed char var_2 = (signed char)-37;
unsigned int var_3 = 1037480821U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 5961704365077314189ULL;
short var_8 = (short)20798;
int zero = 0;
int var_10 = 778647278;
short var_11 = (short)27663;
unsigned long long int var_12 = 14541304589184114525ULL;
unsigned char var_13 = (unsigned char)166;
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
