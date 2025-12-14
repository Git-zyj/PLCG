#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-83;
unsigned long long int var_6 = 15851556979747299678ULL;
signed char var_13 = (signed char)-105;
short var_15 = (short)-30548;
signed char var_17 = (signed char)64;
int zero = 0;
signed char var_19 = (signed char)-19;
signed char var_20 = (signed char)-90;
signed char var_21 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
