#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)19588;
unsigned short var_10 = (unsigned short)31156;
unsigned short var_11 = (unsigned short)22451;
unsigned int var_12 = 1786580357U;
unsigned long long int var_17 = 11804323518892274994ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)203;
unsigned long long int var_21 = 18186995705600100702ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
