#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
int var_2 = -1468196512;
long long int var_6 = 7603939014557693459LL;
signed char var_15 = (signed char)119;
unsigned char var_16 = (unsigned char)139;
signed char var_17 = (signed char)-97;
int zero = 0;
int var_18 = -23280769;
signed char var_19 = (signed char)17;
signed char var_20 = (signed char)105;
void init() {
}

void checksum() {
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
