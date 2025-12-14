#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24373;
long long int var_3 = -7409054949460936244LL;
unsigned short var_8 = (unsigned short)7195;
long long int var_11 = 5278555001326284450LL;
unsigned long long int var_12 = 6149602185397102524ULL;
unsigned short var_13 = (unsigned short)10130;
int zero = 0;
unsigned int var_16 = 623280506U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-4955;
unsigned char var_19 = (unsigned char)62;
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
