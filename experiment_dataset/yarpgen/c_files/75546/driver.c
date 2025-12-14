#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6853010602261411445ULL;
unsigned long long int var_4 = 4722596962458933437ULL;
int var_8 = -2134866821;
int zero = 0;
int var_11 = -1902693319;
unsigned long long int var_12 = 12727594098647695017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
