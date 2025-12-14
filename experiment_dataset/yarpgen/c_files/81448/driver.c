#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49731;
short var_3 = (short)-28040;
short var_5 = (short)2197;
signed char var_9 = (signed char)-60;
int var_14 = -1260462224;
int zero = 0;
long long int var_17 = -4427707964095872134LL;
unsigned long long int var_18 = 8263475960053690628ULL;
short var_19 = (short)-22909;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
