#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38395;
long long int var_4 = 5609421178625510518LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)7;
long long int var_8 = 6039794899589464375LL;
unsigned char var_9 = (unsigned char)67;
unsigned char var_11 = (unsigned char)14;
unsigned char var_12 = (unsigned char)35;
unsigned short var_15 = (unsigned short)22621;
int zero = 0;
unsigned int var_17 = 476241717U;
unsigned char var_18 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
