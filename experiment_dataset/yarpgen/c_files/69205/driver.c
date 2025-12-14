#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1909420341U;
int var_4 = -845695469;
unsigned long long int var_5 = 17421443076571227502ULL;
int var_7 = -1572502545;
unsigned int var_8 = 1740235955U;
unsigned int var_9 = 1197662032U;
int zero = 0;
unsigned long long int var_10 = 16618531100163546272ULL;
int var_11 = 1836192903;
short var_12 = (short)-2581;
unsigned char var_13 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
