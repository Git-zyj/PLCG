#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
long long int var_1 = 6041407786150504612LL;
unsigned char var_2 = (unsigned char)234;
unsigned short var_3 = (unsigned short)61331;
short var_5 = (short)-28893;
unsigned short var_8 = (unsigned short)58388;
int var_9 = -1330475346;
signed char var_11 = (signed char)9;
unsigned long long int var_17 = 17855334640547199841ULL;
int zero = 0;
int var_19 = 1877437672;
long long int var_20 = -1183878285436817181LL;
unsigned short var_21 = (unsigned short)38828;
void init() {
}

void checksum() {
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
