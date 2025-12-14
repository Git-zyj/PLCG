#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10551153341823472576ULL;
long long int var_2 = 8715452931671836823LL;
int var_4 = -1367732430;
unsigned int var_7 = 1580980442U;
unsigned long long int var_8 = 16577657428460238584ULL;
unsigned short var_9 = (unsigned short)30107;
short var_12 = (short)-10259;
int zero = 0;
unsigned int var_13 = 2746101385U;
unsigned long long int var_14 = 5525433661814208228ULL;
unsigned short var_15 = (unsigned short)58348;
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
