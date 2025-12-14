#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12119;
int var_2 = -164702093;
unsigned char var_4 = (unsigned char)61;
unsigned int var_8 = 3916922238U;
_Bool var_9 = (_Bool)1;
int var_15 = -1438237458;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-28464;
int zero = 0;
unsigned long long int var_19 = 3515580922576221255ULL;
short var_20 = (short)-26891;
void init() {
}

void checksum() {
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
