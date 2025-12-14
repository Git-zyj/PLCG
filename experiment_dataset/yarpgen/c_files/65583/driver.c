#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19166;
unsigned int var_3 = 3454792797U;
unsigned short var_4 = (unsigned short)19351;
unsigned int var_5 = 1963204252U;
long long int var_6 = 4191710080117181305LL;
signed char var_9 = (signed char)-4;
unsigned short var_11 = (unsigned short)38200;
short var_14 = (short)11219;
unsigned long long int var_15 = 5918329101838075242ULL;
unsigned char var_17 = (unsigned char)4;
unsigned int var_18 = 1301367596U;
unsigned int var_19 = 2676604939U;
int zero = 0;
unsigned short var_20 = (unsigned short)21513;
unsigned int var_21 = 968351847U;
unsigned char var_22 = (unsigned char)152;
unsigned char var_23 = (unsigned char)215;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
