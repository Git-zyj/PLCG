#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1146274524;
int var_4 = 1296897402;
short var_6 = (short)3728;
unsigned long long int var_7 = 3827039226716043695ULL;
unsigned long long int var_8 = 42652607314640709ULL;
unsigned short var_9 = (unsigned short)63717;
short var_11 = (short)-24196;
unsigned long long int var_12 = 13158872373454047709ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
long long int var_14 = -9133255727203971502LL;
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
