#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
short var_5 = (short)7453;
unsigned short var_6 = (unsigned short)47348;
int var_9 = -223637892;
int var_10 = -670471576;
long long int var_11 = -4539039483747706249LL;
int zero = 0;
unsigned long long int var_18 = 15057968623181014692ULL;
unsigned char var_19 = (unsigned char)109;
unsigned short var_20 = (unsigned short)886;
unsigned long long int var_21 = 1208059095058267327ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
