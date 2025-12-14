#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
signed char var_2 = (signed char)40;
signed char var_6 = (signed char)111;
signed char var_7 = (signed char)-115;
unsigned char var_8 = (unsigned char)89;
unsigned int var_9 = 3781375189U;
short var_10 = (short)25998;
int zero = 0;
unsigned short var_12 = (unsigned short)43260;
unsigned short var_13 = (unsigned short)53201;
unsigned char var_14 = (unsigned char)110;
unsigned int var_15 = 3036069128U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
