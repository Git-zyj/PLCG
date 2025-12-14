#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20220;
short var_2 = (short)12255;
unsigned int var_3 = 803725345U;
int var_4 = -1429253203;
short var_9 = (short)-14128;
unsigned int var_12 = 2648686619U;
long long int var_14 = -983357897879683828LL;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
unsigned int var_17 = 3014682984U;
unsigned int var_18 = 2449739492U;
unsigned long long int var_19 = 14734309191301583092ULL;
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
