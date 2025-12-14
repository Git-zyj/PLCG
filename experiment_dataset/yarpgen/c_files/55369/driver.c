#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned long long int var_2 = 8358437967932995471ULL;
long long int var_7 = -4695005487777643124LL;
signed char var_9 = (signed char)-62;
short var_11 = (short)-26657;
int zero = 0;
short var_13 = (short)-1779;
short var_14 = (short)31993;
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
