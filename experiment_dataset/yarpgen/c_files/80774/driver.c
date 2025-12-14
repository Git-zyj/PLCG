#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
signed char var_3 = (signed char)-65;
unsigned short var_5 = (unsigned short)61201;
signed char var_8 = (signed char)-54;
int var_9 = 1755011455;
unsigned short var_14 = (unsigned short)41863;
unsigned int var_15 = 269612810U;
short var_16 = (short)20890;
int zero = 0;
unsigned long long int var_17 = 14210422006300517594ULL;
signed char var_18 = (signed char)55;
int var_19 = -668294293;
unsigned int var_20 = 1974204592U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
