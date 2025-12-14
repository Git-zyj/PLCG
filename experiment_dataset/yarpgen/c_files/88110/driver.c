#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
long long int var_3 = 1601263823331835682LL;
long long int var_6 = -316525952804373082LL;
unsigned short var_9 = (unsigned short)12098;
unsigned short var_11 = (unsigned short)21198;
unsigned short var_13 = (unsigned short)26224;
long long int var_14 = 8565293872014031330LL;
unsigned short var_16 = (unsigned short)59523;
int zero = 0;
short var_19 = (short)27517;
int var_20 = 818163367;
short var_21 = (short)-11265;
long long int var_22 = 4961644847403524745LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
