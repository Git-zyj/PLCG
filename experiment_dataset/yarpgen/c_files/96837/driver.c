#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 927262308;
int var_3 = 1771698356;
unsigned short var_4 = (unsigned short)22935;
short var_5 = (short)29551;
signed char var_7 = (signed char)12;
long long int var_8 = 1194825366619008283LL;
unsigned short var_9 = (unsigned short)24005;
int zero = 0;
long long int var_10 = 3675729148663321581LL;
unsigned short var_11 = (unsigned short)41971;
unsigned int var_12 = 3726912668U;
unsigned long long int var_13 = 606829763907088525ULL;
short var_14 = (short)32177;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
