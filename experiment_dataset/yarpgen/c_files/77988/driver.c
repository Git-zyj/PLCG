#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3400076987U;
unsigned long long int var_3 = 17844200126080841766ULL;
unsigned int var_4 = 377200348U;
unsigned long long int var_6 = 11276961137103227055ULL;
int var_7 = -883919865;
signed char var_8 = (signed char)122;
unsigned long long int var_9 = 13617666718048266864ULL;
int zero = 0;
short var_12 = (short)-15646;
unsigned int var_13 = 1444400465U;
unsigned int var_14 = 3495104472U;
int var_15 = -870455363;
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
