#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -719026168;
unsigned char var_1 = (unsigned char)1;
short var_3 = (short)9567;
int var_5 = -1955217755;
unsigned char var_6 = (unsigned char)107;
int var_7 = 818710655;
int var_8 = -238574943;
short var_9 = (short)-10617;
short var_10 = (short)7716;
int var_11 = 1049065469;
int zero = 0;
unsigned short var_12 = (unsigned short)42336;
unsigned short var_13 = (unsigned short)19044;
unsigned char var_14 = (unsigned char)195;
long long int var_15 = 8572762805937180891LL;
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
