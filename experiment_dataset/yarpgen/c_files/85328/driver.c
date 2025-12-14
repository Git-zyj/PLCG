#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
long long int var_7 = -5081417875257366375LL;
unsigned short var_11 = (unsigned short)32224;
unsigned int var_14 = 2196819591U;
int zero = 0;
unsigned short var_15 = (unsigned short)47756;
unsigned long long int var_16 = 9776310030705414807ULL;
long long int var_17 = -1701703966823725518LL;
long long int var_18 = -5969589985328799771LL;
void init() {
}

void checksum() {
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
