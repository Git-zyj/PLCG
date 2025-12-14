#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17372082061618739624ULL;
unsigned long long int var_4 = 1398313269809965796ULL;
unsigned short var_7 = (unsigned short)50946;
int zero = 0;
unsigned long long int var_10 = 13348323094861938560ULL;
signed char var_11 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
