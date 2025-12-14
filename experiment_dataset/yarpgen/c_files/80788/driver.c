#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
signed char var_2 = (signed char)63;
unsigned char var_4 = (unsigned char)144;
short var_7 = (short)-15103;
signed char var_8 = (signed char)78;
long long int var_10 = 2424960151500070920LL;
int zero = 0;
unsigned short var_12 = (unsigned short)19610;
long long int var_13 = -500829928632292851LL;
unsigned long long int var_14 = 17579263666316509320ULL;
unsigned short var_15 = (unsigned short)53911;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
