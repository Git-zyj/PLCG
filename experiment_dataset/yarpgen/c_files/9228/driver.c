#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2905519716U;
unsigned char var_2 = (unsigned char)229;
signed char var_6 = (signed char)57;
int var_10 = 1390339078;
long long int var_17 = -6634539794966617033LL;
int zero = 0;
int var_20 = -661143440;
unsigned long long int var_21 = 5047732968906903744ULL;
signed char var_22 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
