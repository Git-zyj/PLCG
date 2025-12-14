#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 344487618U;
unsigned short var_6 = (unsigned short)26008;
unsigned int var_7 = 4083137440U;
unsigned int var_8 = 3387070094U;
unsigned long long int var_9 = 3495021459289241250ULL;
int var_11 = 1517127038;
int var_13 = -580521382;
unsigned int var_15 = 3645365934U;
int zero = 0;
unsigned int var_17 = 1399337304U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
