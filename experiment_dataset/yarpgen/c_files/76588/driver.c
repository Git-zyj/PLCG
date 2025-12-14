#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned char var_1 = (unsigned char)5;
unsigned long long int var_3 = 8315214406672779672ULL;
unsigned char var_5 = (unsigned char)206;
unsigned char var_6 = (unsigned char)181;
short var_8 = (short)-22149;
short var_9 = (short)-570;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6149937691574616838LL;
unsigned int var_13 = 3741925567U;
signed char var_14 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
