#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17422427459406038279ULL;
short var_6 = (short)26567;
long long int var_7 = 5362283559077608723LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 13425901807044740721ULL;
unsigned int var_13 = 2101051097U;
long long int var_14 = -1246010275144805018LL;
unsigned short var_15 = (unsigned short)34881;
signed char var_16 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
