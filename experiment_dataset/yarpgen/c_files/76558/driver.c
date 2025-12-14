#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24630;
unsigned char var_7 = (unsigned char)14;
long long int var_11 = -4070745766612014498LL;
short var_12 = (short)29138;
int zero = 0;
signed char var_15 = (signed char)63;
int var_16 = -1666765479;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
