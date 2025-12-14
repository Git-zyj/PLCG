#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 698900028U;
unsigned int var_1 = 2168074882U;
int var_2 = -615508832;
unsigned short var_4 = (unsigned short)56924;
unsigned int var_7 = 437807737U;
short var_8 = (short)2851;
short var_9 = (short)-24634;
short var_13 = (short)-28854;
int var_15 = -1281329;
int zero = 0;
unsigned long long int var_16 = 6051229866546486457ULL;
long long int var_17 = 7261202662668251202LL;
unsigned long long int var_18 = 16295716760624064216ULL;
unsigned long long int var_19 = 13328923876055052428ULL;
_Bool var_20 = (_Bool)0;
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
