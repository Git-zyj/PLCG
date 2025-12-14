#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1439872870;
int var_7 = 2113229225;
signed char var_8 = (signed char)-11;
signed char var_10 = (signed char)-15;
signed char var_13 = (signed char)34;
int var_16 = 628690518;
int zero = 0;
signed char var_20 = (signed char)-111;
int var_21 = -1041478987;
signed char var_22 = (signed char)-85;
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
