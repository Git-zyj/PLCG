#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
signed char var_2 = (signed char)109;
signed char var_8 = (signed char)-7;
signed char var_11 = (signed char)108;
signed char var_12 = (signed char)-125;
signed char var_17 = (signed char)-65;
int zero = 0;
signed char var_18 = (signed char)-3;
signed char var_19 = (signed char)-28;
signed char var_20 = (signed char)8;
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
