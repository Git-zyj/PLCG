#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46116;
signed char var_4 = (signed char)99;
signed char var_5 = (signed char)-115;
long long int var_7 = 8041738654960049391LL;
unsigned long long int var_9 = 9550082625452453056ULL;
int zero = 0;
long long int var_12 = -3088930694730240432LL;
signed char var_13 = (signed char)106;
signed char var_14 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
