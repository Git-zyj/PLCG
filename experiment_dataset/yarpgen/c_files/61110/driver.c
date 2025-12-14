#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
signed char var_2 = (signed char)40;
short var_3 = (short)-3644;
unsigned char var_4 = (unsigned char)85;
signed char var_5 = (signed char)-75;
signed char var_6 = (signed char)-65;
signed char var_11 = (signed char)-102;
int zero = 0;
long long int var_12 = 517423268174846074LL;
signed char var_13 = (signed char)105;
signed char var_14 = (signed char)24;
signed char var_15 = (signed char)-59;
long long int var_16 = 2399049682502286892LL;
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
