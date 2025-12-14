#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
unsigned short var_3 = (unsigned short)36767;
int var_5 = -292034353;
unsigned int var_11 = 3631426423U;
unsigned char var_12 = (unsigned char)131;
unsigned long long int var_13 = 6086430011355756204ULL;
long long int var_19 = -8054996516673771622LL;
int zero = 0;
signed char var_20 = (signed char)19;
signed char var_21 = (signed char)-41;
unsigned short var_22 = (unsigned short)40167;
signed char var_23 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
