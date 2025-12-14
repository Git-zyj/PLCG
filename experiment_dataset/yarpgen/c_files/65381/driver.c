#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
int var_1 = 1775153785;
long long int var_2 = -3161343057993762257LL;
long long int var_5 = 6708842236037154695LL;
unsigned int var_7 = 1843503302U;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 1257011038U;
int zero = 0;
int var_14 = -1251454948;
unsigned int var_15 = 59482845U;
long long int var_16 = -6462416412174562544LL;
unsigned char var_17 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
