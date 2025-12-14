#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18454;
long long int var_6 = -4765928781042294643LL;
signed char var_7 = (signed char)82;
unsigned char var_8 = (unsigned char)191;
unsigned long long int var_10 = 14596678513293235921ULL;
short var_13 = (short)31095;
int var_14 = 1794977677;
int zero = 0;
unsigned char var_15 = (unsigned char)125;
short var_16 = (short)6187;
unsigned int var_17 = 3857136850U;
short var_18 = (short)8168;
signed char var_19 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
