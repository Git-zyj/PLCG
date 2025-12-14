#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
unsigned char var_1 = (unsigned char)72;
short var_6 = (short)17519;
signed char var_8 = (signed char)56;
unsigned short var_10 = (unsigned short)3893;
signed char var_12 = (signed char)-111;
long long int var_13 = 377571788487298604LL;
int zero = 0;
signed char var_14 = (signed char)-54;
long long int var_15 = -225061469654684901LL;
signed char var_16 = (signed char)51;
int var_17 = -1463529533;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
