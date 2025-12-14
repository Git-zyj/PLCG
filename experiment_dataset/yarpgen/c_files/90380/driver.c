#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16372;
int var_2 = 416660412;
int var_3 = -2002801269;
int var_7 = 574563546;
long long int var_8 = 5053941483323862052LL;
signed char var_10 = (signed char)35;
unsigned char var_12 = (unsigned char)171;
unsigned char var_15 = (unsigned char)117;
unsigned char var_16 = (unsigned char)217;
int zero = 0;
signed char var_18 = (signed char)-91;
unsigned long long int var_19 = 1658090440372423816ULL;
unsigned int var_20 = 3512752920U;
short var_21 = (short)-15667;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
