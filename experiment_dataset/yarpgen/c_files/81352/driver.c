#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -821559792;
short var_2 = (short)18922;
unsigned char var_5 = (unsigned char)46;
int var_9 = 552785125;
int var_11 = -758752141;
unsigned char var_13 = (unsigned char)20;
int zero = 0;
unsigned int var_16 = 796975317U;
unsigned int var_17 = 752114130U;
long long int var_18 = -937736281113968496LL;
unsigned char var_19 = (unsigned char)196;
int var_20 = -1668161297;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
