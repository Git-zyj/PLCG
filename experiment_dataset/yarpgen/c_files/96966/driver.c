#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 589523268U;
short var_3 = (short)-15666;
_Bool var_4 = (_Bool)1;
int var_15 = -1647384478;
int zero = 0;
unsigned long long int var_17 = 13260661797006647539ULL;
long long int var_18 = -7664087454194487852LL;
void init() {
}

void checksum() {
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
