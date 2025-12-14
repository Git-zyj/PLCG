#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
short var_3 = (short)14209;
unsigned short var_4 = (unsigned short)28007;
long long int var_8 = -5033535805903110613LL;
unsigned short var_9 = (unsigned short)5675;
short var_11 = (short)-25306;
int zero = 0;
signed char var_18 = (signed char)0;
signed char var_19 = (signed char)-82;
unsigned char var_20 = (unsigned char)80;
signed char var_21 = (signed char)18;
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
