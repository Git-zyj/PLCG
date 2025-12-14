#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5920328248147929167LL;
unsigned long long int var_3 = 11161677374888855011ULL;
unsigned long long int var_4 = 16770099320440070811ULL;
long long int var_6 = -8611453846776955465LL;
unsigned int var_9 = 1164198497U;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)31;
int zero = 0;
unsigned short var_17 = (unsigned short)34048;
long long int var_18 = -5873685577106580137LL;
long long int var_19 = -9213260191526532485LL;
void init() {
}

void checksum() {
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
