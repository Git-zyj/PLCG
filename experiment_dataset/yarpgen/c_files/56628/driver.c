#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2901761004U;
short var_10 = (short)-27345;
unsigned char var_15 = (unsigned char)142;
int zero = 0;
long long int var_19 = -7730450553487201506LL;
long long int var_20 = -4793240547897145129LL;
void init() {
}

void checksum() {
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
