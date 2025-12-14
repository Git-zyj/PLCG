#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14535442462690295303ULL;
int var_5 = -1743336845;
unsigned short var_8 = (unsigned short)44961;
long long int var_11 = -3536624406377359580LL;
int zero = 0;
unsigned short var_12 = (unsigned short)50241;
int var_13 = 1360908517;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
