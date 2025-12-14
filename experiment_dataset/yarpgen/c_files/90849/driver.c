#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -744783367;
long long int var_2 = -617856104203599109LL;
unsigned int var_3 = 815272917U;
int var_5 = -1821658999;
unsigned short var_6 = (unsigned short)48545;
unsigned long long int var_8 = 15093947751200466260ULL;
unsigned short var_9 = (unsigned short)22188;
unsigned short var_10 = (unsigned short)210;
int zero = 0;
int var_11 = -638617239;
short var_12 = (short)-9177;
short var_13 = (short)10254;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
