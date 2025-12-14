#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)115;
signed char var_7 = (signed char)-112;
unsigned char var_8 = (unsigned char)89;
unsigned char var_9 = (unsigned char)58;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 17137198053274335775ULL;
unsigned int var_13 = 1825251428U;
unsigned long long int var_14 = 14719966586870474004ULL;
signed char var_15 = (signed char)-91;
unsigned short var_16 = (unsigned short)33947;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
