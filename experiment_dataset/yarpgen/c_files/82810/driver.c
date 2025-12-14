#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-11921;
unsigned char var_9 = (unsigned char)45;
long long int var_10 = 3731218117451934679LL;
unsigned char var_11 = (unsigned char)7;
int zero = 0;
unsigned short var_12 = (unsigned short)40036;
unsigned int var_13 = 1597341186U;
signed char var_14 = (signed char)-72;
unsigned int var_15 = 3550512452U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
