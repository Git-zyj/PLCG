#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11484503293331063458ULL;
signed char var_1 = (signed char)116;
int var_2 = 1953065031;
unsigned short var_4 = (unsigned short)26819;
short var_5 = (short)19443;
int var_6 = -1232675721;
short var_8 = (short)-6505;
unsigned char var_10 = (unsigned char)138;
unsigned short var_11 = (unsigned short)47728;
int zero = 0;
short var_12 = (short)-4773;
unsigned long long int var_13 = 6698051340584563445ULL;
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
