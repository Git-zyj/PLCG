#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9229799413267719535ULL;
unsigned short var_1 = (unsigned short)48208;
unsigned char var_2 = (unsigned char)191;
unsigned int var_6 = 3441639650U;
long long int var_7 = 734070576148589526LL;
short var_11 = (short)-29574;
int zero = 0;
unsigned short var_13 = (unsigned short)23806;
signed char var_14 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
