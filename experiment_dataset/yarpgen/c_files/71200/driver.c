#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3880021859U;
unsigned long long int var_5 = 18200300246331350620ULL;
unsigned long long int var_10 = 3471979559564525837ULL;
signed char var_15 = (signed char)-45;
int zero = 0;
int var_18 = -579272525;
unsigned long long int var_19 = 17021067447496657126ULL;
unsigned int var_20 = 170608940U;
int var_21 = -839796173;
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
