#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8007;
int var_3 = 192994664;
unsigned long long int var_6 = 18265472086160403446ULL;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
int var_10 = 968016701;
int var_11 = -752066422;
short var_12 = (short)569;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
