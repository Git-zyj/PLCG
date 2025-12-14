#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15576109299361879731ULL;
signed char var_7 = (signed char)41;
unsigned char var_11 = (unsigned char)108;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -316790047;
void init() {
}

void checksum() {
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
