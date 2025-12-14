#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
int var_6 = 726188742;
signed char var_8 = (signed char)-27;
short var_11 = (short)-19039;
int zero = 0;
unsigned int var_18 = 395386968U;
signed char var_19 = (signed char)-114;
signed char var_20 = (signed char)-80;
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
