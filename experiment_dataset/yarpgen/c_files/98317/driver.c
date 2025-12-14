#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27794;
unsigned short var_3 = (unsigned short)31838;
unsigned long long int var_5 = 17644531883539745290ULL;
unsigned short var_7 = (unsigned short)7318;
unsigned short var_8 = (unsigned short)34016;
unsigned long long int var_9 = 17116456068908397767ULL;
unsigned long long int var_11 = 9505655104735397035ULL;
long long int var_15 = -3427101711961789380LL;
int zero = 0;
long long int var_17 = -7539200552919764329LL;
unsigned long long int var_18 = 13117633336170135546ULL;
unsigned int var_19 = 3854054351U;
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
