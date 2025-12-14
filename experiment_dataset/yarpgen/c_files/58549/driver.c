#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3693058978744237929ULL;
short var_6 = (short)-14022;
long long int var_8 = -2392243327206695972LL;
int var_9 = -985119493;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)125;
short var_16 = (short)-9177;
unsigned long long int var_17 = 15841029766302607794ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)59863;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 11023543463903415108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
