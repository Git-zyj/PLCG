#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18806;
short var_1 = (short)9734;
unsigned int var_2 = 912005603U;
long long int var_8 = -778014282814786941LL;
_Bool var_10 = (_Bool)1;
int var_12 = -1143216181;
long long int var_15 = 1686140814921768949LL;
int zero = 0;
signed char var_16 = (signed char)25;
short var_17 = (short)31899;
signed char var_18 = (signed char)-116;
int var_19 = -385830548;
signed char var_20 = (signed char)-98;
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
