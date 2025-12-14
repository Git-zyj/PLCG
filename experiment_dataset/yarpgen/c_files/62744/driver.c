#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3433842211U;
unsigned short var_5 = (unsigned short)23383;
unsigned short var_8 = (unsigned short)65285;
unsigned char var_10 = (unsigned char)121;
int zero = 0;
unsigned long long int var_14 = 9547106250331976996ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -6366384661006229996LL;
void init() {
}

void checksum() {
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
