#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7176710642201462399LL;
int var_5 = -1767219350;
int var_6 = 38202709;
unsigned char var_7 = (unsigned char)15;
int zero = 0;
int var_11 = -1563941526;
long long int var_12 = 4710660988487873273LL;
int var_13 = -1740107796;
unsigned long long int var_14 = 9026950446377960501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
