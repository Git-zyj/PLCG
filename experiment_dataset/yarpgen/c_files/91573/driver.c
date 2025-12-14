#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22340;
int var_6 = -1381636672;
unsigned short var_9 = (unsigned short)5085;
unsigned char var_10 = (unsigned char)64;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 3094366361667559634ULL;
unsigned long long int var_13 = 10085545844611802695ULL;
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
