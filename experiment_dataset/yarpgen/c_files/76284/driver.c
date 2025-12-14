#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14217;
int var_5 = 976806294;
unsigned char var_8 = (unsigned char)97;
short var_10 = (short)-24645;
int zero = 0;
unsigned char var_12 = (unsigned char)108;
long long int var_13 = 1817578151204816916LL;
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
