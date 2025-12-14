#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4398878178346476723LL;
int var_7 = 1998853000;
signed char var_9 = (signed char)-17;
unsigned char var_16 = (unsigned char)151;
signed char var_17 = (signed char)-10;
int zero = 0;
unsigned short var_18 = (unsigned short)49457;
short var_19 = (short)-10120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
