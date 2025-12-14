#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7909782902748759306LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-17123;
unsigned long long int var_5 = 1626891973597752442ULL;
int var_7 = -326764418;
signed char var_9 = (signed char)108;
unsigned char var_10 = (unsigned char)168;
unsigned short var_12 = (unsigned short)29886;
signed char var_13 = (signed char)-82;
int zero = 0;
signed char var_14 = (signed char)-126;
unsigned short var_15 = (unsigned short)24968;
unsigned int var_16 = 1574051189U;
unsigned long long int var_17 = 12427545088932592570ULL;
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
