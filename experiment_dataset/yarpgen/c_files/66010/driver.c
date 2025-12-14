#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5954607674800291008ULL;
unsigned long long int var_2 = 15734263531845225192ULL;
unsigned short var_4 = (unsigned short)51857;
short var_6 = (short)24312;
int zero = 0;
unsigned long long int var_10 = 10664002883029077547ULL;
unsigned long long int var_11 = 949946425840577850ULL;
signed char var_12 = (signed char)-118;
unsigned char var_13 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
