#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 464123821783040614ULL;
unsigned short var_4 = (unsigned short)33538;
unsigned char var_5 = (unsigned char)172;
unsigned long long int var_6 = 13087962479452833177ULL;
short var_8 = (short)15452;
int zero = 0;
unsigned char var_14 = (unsigned char)174;
unsigned long long int var_15 = 9670117410560678952ULL;
short var_16 = (short)13391;
signed char var_17 = (signed char)-15;
long long int var_18 = -3959696727203101429LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
