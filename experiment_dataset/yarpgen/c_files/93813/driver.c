#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 220935087;
unsigned char var_4 = (unsigned char)205;
unsigned short var_5 = (unsigned short)45460;
int var_8 = 1885588671;
short var_12 = (short)4056;
int zero = 0;
unsigned char var_13 = (unsigned char)90;
unsigned short var_14 = (unsigned short)39088;
int var_15 = 1182874502;
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
