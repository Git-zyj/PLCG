#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
int var_4 = 1479785405;
signed char var_6 = (signed char)14;
long long int var_9 = 5639084525008314159LL;
long long int var_13 = 6117892639133286593LL;
unsigned long long int var_15 = 17267491580905381987ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
long long int var_18 = 2649074047762656781LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
