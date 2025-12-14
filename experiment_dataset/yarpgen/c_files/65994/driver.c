#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned int var_2 = 3874348186U;
unsigned long long int var_6 = 11829242781616007093ULL;
signed char var_7 = (signed char)90;
unsigned int var_11 = 3649693304U;
int zero = 0;
unsigned short var_12 = (unsigned short)12488;
unsigned int var_13 = 313485834U;
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
