#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1196576700U;
unsigned char var_2 = (unsigned char)182;
long long int var_3 = -8906661075550477519LL;
unsigned short var_5 = (unsigned short)15045;
short var_7 = (short)21230;
int var_8 = 301105957;
long long int var_9 = -5157545958411380803LL;
int var_10 = -284745431;
unsigned short var_12 = (unsigned short)2394;
long long int var_15 = 2642282862258942631LL;
signed char var_16 = (signed char)-38;
unsigned int var_17 = 2396645799U;
int zero = 0;
long long int var_18 = 4071644713838124277LL;
unsigned int var_19 = 1447940005U;
unsigned short var_20 = (unsigned short)46269;
long long int var_21 = -6544000307263446677LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
