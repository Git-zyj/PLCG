#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10614;
signed char var_11 = (signed char)-51;
short var_18 = (short)25545;
int zero = 0;
unsigned long long int var_20 = 5976855106776696142ULL;
long long int var_21 = -615251987285951505LL;
int var_22 = 1608951510;
int var_23 = -1062766910;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
