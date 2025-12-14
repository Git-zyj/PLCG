#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9206691937701731392ULL;
int var_13 = -1423070281;
int zero = 0;
unsigned long long int var_17 = 2062932398689904186ULL;
long long int var_18 = 8301333016698084013LL;
unsigned char var_19 = (unsigned char)27;
unsigned short var_20 = (unsigned short)64685;
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
