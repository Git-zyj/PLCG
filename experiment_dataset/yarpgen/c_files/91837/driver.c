#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30039;
_Bool var_3 = (_Bool)1;
short var_5 = (short)27587;
unsigned short var_8 = (unsigned short)61090;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2967903071U;
long long int var_11 = 6505014597167102568LL;
int var_13 = -772746030;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3748004700781927345LL;
unsigned int var_18 = 262515965U;
unsigned short var_19 = (unsigned short)40859;
void init() {
}

void checksum() {
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
