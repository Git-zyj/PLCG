#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 224594577U;
int var_12 = 423584090;
short var_14 = (short)23763;
int zero = 0;
long long int var_15 = 306486644977467364LL;
unsigned short var_16 = (unsigned short)13881;
short var_17 = (short)27758;
void init() {
}

void checksum() {
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
