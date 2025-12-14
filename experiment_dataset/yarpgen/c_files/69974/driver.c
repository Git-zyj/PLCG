#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26724;
long long int var_3 = 4529900091243481765LL;
unsigned char var_4 = (unsigned char)135;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-15427;
int var_9 = -1368641967;
signed char var_11 = (signed char)-106;
int zero = 0;
unsigned int var_14 = 2440209839U;
short var_15 = (short)-14459;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
