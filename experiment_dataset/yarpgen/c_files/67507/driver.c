#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8182879591588429747ULL;
signed char var_2 = (signed char)-20;
signed char var_5 = (signed char)34;
int var_10 = -1711385325;
signed char var_13 = (signed char)-8;
signed char var_15 = (signed char)-44;
int zero = 0;
int var_18 = 1764479233;
int var_19 = 1911049114;
signed char var_20 = (signed char)-63;
unsigned long long int var_21 = 7346914291207905220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
