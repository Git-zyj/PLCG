#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1235;
unsigned char var_3 = (unsigned char)202;
unsigned short var_5 = (unsigned short)3176;
unsigned long long int var_14 = 7487047739764209429ULL;
unsigned char var_16 = (unsigned char)109;
int zero = 0;
unsigned char var_18 = (unsigned char)249;
short var_19 = (short)10705;
void init() {
}

void checksum() {
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
