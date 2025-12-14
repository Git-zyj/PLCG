#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-73;
long long int var_5 = -1955149147253200018LL;
short var_8 = (short)15565;
short var_9 = (short)-8666;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 11550647095208846944ULL;
long long int var_16 = -7589996981380612530LL;
unsigned char var_18 = (unsigned char)160;
int zero = 0;
long long int var_19 = 7440650315418283919LL;
signed char var_20 = (signed char)-61;
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
