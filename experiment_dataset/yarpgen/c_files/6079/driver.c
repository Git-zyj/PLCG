#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)115;
signed char var_8 = (signed char)7;
signed char var_9 = (signed char)-86;
signed char var_10 = (signed char)-38;
signed char var_12 = (signed char)117;
signed char var_13 = (signed char)57;
signed char var_16 = (signed char)-84;
int zero = 0;
signed char var_18 = (signed char)61;
signed char var_19 = (signed char)-11;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
