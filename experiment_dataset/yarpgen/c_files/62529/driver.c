#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3849487738U;
unsigned char var_8 = (unsigned char)212;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)255;
short var_14 = (short)31512;
unsigned short var_15 = (unsigned short)50657;
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
