#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned char var_2 = (unsigned char)235;
short var_7 = (short)-22483;
signed char var_8 = (signed char)114;
long long int var_11 = -1262078587245807756LL;
unsigned long long int var_15 = 17146613355825024209ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)151;
unsigned long long int var_18 = 8504503651957487865ULL;
signed char var_19 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
