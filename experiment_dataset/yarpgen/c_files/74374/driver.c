#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3653;
short var_1 = (short)-5204;
signed char var_8 = (signed char)-44;
unsigned short var_9 = (unsigned short)28549;
int var_11 = -443937518;
short var_12 = (short)-20166;
int zero = 0;
unsigned short var_15 = (unsigned short)8705;
short var_16 = (short)-28787;
unsigned short var_17 = (unsigned short)29980;
long long int var_18 = 8223182680422324306LL;
unsigned long long int var_19 = 18392930543448043794ULL;
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
