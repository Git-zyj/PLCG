#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
unsigned int var_3 = 1301041000U;
int var_4 = -105255156;
unsigned short var_8 = (unsigned short)52628;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -1317601065511695040LL;
short var_13 = (short)5728;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
