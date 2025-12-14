#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62523;
long long int var_2 = 1440452863214507956LL;
int var_5 = -788992541;
long long int var_8 = 4261260654252369261LL;
long long int var_9 = -3248851393706438861LL;
int var_10 = 54626109;
long long int var_11 = 3040653909001863869LL;
int zero = 0;
unsigned int var_12 = 1884553422U;
signed char var_13 = (signed char)123;
unsigned long long int var_14 = 2917865399772525713ULL;
long long int var_15 = -3631302382790606943LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
