#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
long long int var_1 = -7358001481617616569LL;
unsigned long long int var_2 = 11281435196866861172ULL;
unsigned char var_3 = (unsigned char)166;
signed char var_4 = (signed char)16;
unsigned char var_5 = (unsigned char)228;
signed char var_6 = (signed char)-6;
unsigned long long int var_8 = 10222772417477588911ULL;
signed char var_10 = (signed char)71;
int zero = 0;
unsigned long long int var_11 = 17954956110336581743ULL;
unsigned long long int var_12 = 12162143253970844014ULL;
signed char var_13 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
