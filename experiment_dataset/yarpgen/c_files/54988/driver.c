#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned short var_2 = (unsigned short)31059;
short var_9 = (short)-9539;
unsigned short var_10 = (unsigned short)21591;
int var_12 = -1759875784;
int zero = 0;
unsigned long long int var_13 = 9695295206389188042ULL;
signed char var_14 = (signed char)1;
signed char var_15 = (signed char)-21;
int var_16 = -1109375506;
unsigned int var_17 = 3384937686U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
