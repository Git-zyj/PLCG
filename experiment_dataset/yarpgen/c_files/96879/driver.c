#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
long long int var_2 = -6097578359561313130LL;
unsigned short var_4 = (unsigned short)40653;
unsigned long long int var_5 = 14037035386946892317ULL;
unsigned short var_7 = (unsigned short)55241;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-25;
short var_18 = (short)10010;
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
