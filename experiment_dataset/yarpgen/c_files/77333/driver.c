#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32225;
short var_5 = (short)-15965;
unsigned char var_7 = (unsigned char)37;
unsigned short var_9 = (unsigned short)50413;
unsigned int var_11 = 2506684607U;
signed char var_12 = (signed char)18;
int zero = 0;
unsigned int var_13 = 3358146968U;
short var_14 = (short)-31291;
long long int var_15 = -5128650186547353812LL;
void init() {
}

void checksum() {
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
