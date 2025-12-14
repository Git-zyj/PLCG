#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3499020749U;
long long int var_1 = -5899391815847807392LL;
unsigned long long int var_2 = 17730847172721659761ULL;
unsigned long long int var_4 = 11629737995947642101ULL;
int var_6 = 252060904;
unsigned char var_7 = (unsigned char)92;
long long int var_8 = -2447916876055371812LL;
short var_9 = (short)-19405;
int var_10 = 1557157918;
unsigned short var_11 = (unsigned short)17101;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
int var_14 = 619898322;
short var_15 = (short)-19602;
signed char var_16 = (signed char)-89;
long long int var_17 = 5503901754810975528LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
