#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56639;
short var_2 = (short)-17772;
short var_3 = (short)18109;
unsigned int var_5 = 4095610293U;
unsigned char var_8 = (unsigned char)244;
unsigned int var_9 = 2784698592U;
unsigned char var_10 = (unsigned char)215;
unsigned short var_11 = (unsigned short)7491;
long long int var_13 = -8901807871776220381LL;
long long int var_15 = 8790316218000644997LL;
int zero = 0;
signed char var_16 = (signed char)-56;
short var_17 = (short)731;
unsigned long long int var_18 = 14672547760579111827ULL;
short var_19 = (short)3525;
int var_20 = 1104025091;
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
