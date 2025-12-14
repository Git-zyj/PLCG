#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4721542251679440409LL;
unsigned char var_9 = (unsigned char)21;
unsigned long long int var_11 = 9940652044811421892ULL;
signed char var_12 = (signed char)-127;
int zero = 0;
long long int var_15 = 515109184036428158LL;
_Bool var_16 = (_Bool)1;
int var_17 = -1955169372;
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
