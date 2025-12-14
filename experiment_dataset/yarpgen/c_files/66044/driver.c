#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)206;
_Bool var_9 = (_Bool)0;
long long int var_13 = 5715111117336274703LL;
int zero = 0;
short var_16 = (short)10048;
long long int var_17 = 7975267322724150850LL;
unsigned short var_18 = (unsigned short)4823;
void init() {
}

void checksum() {
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
