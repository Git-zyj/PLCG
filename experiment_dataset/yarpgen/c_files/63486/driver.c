#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
signed char var_4 = (signed char)-68;
signed char var_5 = (signed char)-87;
signed char var_6 = (signed char)86;
signed char var_8 = (signed char)-2;
signed char var_9 = (signed char)21;
signed char var_11 = (signed char)-102;
signed char var_12 = (signed char)-46;
signed char var_14 = (signed char)67;
int zero = 0;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)36;
signed char var_17 = (signed char)53;
signed char var_18 = (signed char)-38;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
