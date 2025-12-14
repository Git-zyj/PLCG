#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 847138208676134078ULL;
unsigned int var_3 = 224170U;
unsigned char var_4 = (unsigned char)148;
long long int var_5 = 3971828888703684980LL;
unsigned short var_6 = (unsigned short)54884;
long long int var_9 = 7611346839587378228LL;
unsigned int var_11 = 1488149003U;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 3579630738U;
int zero = 0;
int var_18 = -1434920764;
signed char var_19 = (signed char)-11;
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
