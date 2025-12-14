#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 411610370656888180ULL;
unsigned long long int var_4 = 5167957138550022075ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2381301544341479233ULL;
unsigned long long int var_13 = 3549941521105515733ULL;
short var_15 = (short)3393;
unsigned char var_18 = (unsigned char)48;
int zero = 0;
signed char var_20 = (signed char)7;
long long int var_21 = -1503951782042170258LL;
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
