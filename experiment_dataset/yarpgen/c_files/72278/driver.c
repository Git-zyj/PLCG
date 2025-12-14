#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1218893962478129019ULL;
int var_2 = 2063948090;
int var_3 = -1145167205;
long long int var_4 = 711941402100442703LL;
int zero = 0;
signed char var_13 = (signed char)-67;
unsigned short var_14 = (unsigned short)28512;
int var_15 = -430553849;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
