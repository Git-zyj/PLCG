#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1389847221;
unsigned long long int var_4 = 8461082707753300371ULL;
int zero = 0;
signed char var_12 = (signed char)-72;
unsigned long long int var_13 = 17324867338911036603ULL;
unsigned long long int var_14 = 15899965716569755901ULL;
void init() {
}

void checksum() {
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
