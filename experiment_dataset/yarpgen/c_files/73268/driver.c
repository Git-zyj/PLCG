#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)63;
unsigned long long int var_5 = 213135712283572918ULL;
short var_8 = (short)15951;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-19515;
unsigned short var_13 = (unsigned short)54401;
unsigned long long int var_14 = 8714328729418449625ULL;
int zero = 0;
short var_16 = (short)-21811;
unsigned char var_17 = (unsigned char)225;
unsigned long long int var_18 = 11109423039228204470ULL;
long long int var_19 = -1152295220501441114LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
