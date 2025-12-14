#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7998910981824471612LL;
signed char var_2 = (signed char)108;
long long int var_3 = -717936619357936900LL;
long long int var_5 = 8287945161812186844LL;
signed char var_6 = (signed char)96;
long long int var_8 = -5577824872229893393LL;
long long int var_16 = -274945924218083274LL;
int zero = 0;
signed char var_17 = (signed char)25;
signed char var_18 = (signed char)15;
signed char var_19 = (signed char)62;
long long int var_20 = 7378075042020436261LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
