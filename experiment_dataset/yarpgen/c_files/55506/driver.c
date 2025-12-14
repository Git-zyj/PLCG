#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59149;
long long int var_4 = 3784432763903363094LL;
unsigned short var_8 = (unsigned short)14399;
unsigned long long int var_9 = 14240529940047684098ULL;
unsigned int var_10 = 2787633197U;
short var_12 = (short)28958;
unsigned char var_13 = (unsigned char)194;
unsigned long long int var_14 = 17149480085017786302ULL;
unsigned long long int var_15 = 9022785774671219264ULL;
int zero = 0;
unsigned long long int var_16 = 14502826970462523242ULL;
short var_17 = (short)-10539;
short var_18 = (short)-18321;
unsigned short var_19 = (unsigned short)33297;
short var_20 = (short)23634;
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
