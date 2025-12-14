#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26504;
_Bool var_2 = (_Bool)1;
int var_3 = 2057192272;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)17758;
long long int var_7 = -8853246930563275610LL;
short var_9 = (short)-25165;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13136747657123651788ULL;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
