#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)7621;
unsigned long long int var_6 = 9220272277999874591ULL;
short var_12 = (short)19060;
signed char var_13 = (signed char)53;
unsigned long long int var_14 = 15448956780437812223ULL;
int zero = 0;
unsigned long long int var_15 = 17606827465920221465ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)138;
void init() {
}

void checksum() {
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
