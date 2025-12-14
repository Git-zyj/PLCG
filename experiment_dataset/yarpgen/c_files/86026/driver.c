#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16380;
unsigned long long int var_4 = 12314517674344933472ULL;
short var_6 = (short)-8031;
unsigned long long int var_7 = 10920144964854867569ULL;
int zero = 0;
unsigned long long int var_10 = 17530275678174436856ULL;
short var_11 = (short)-1802;
unsigned long long int var_12 = 12024728220917453053ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
