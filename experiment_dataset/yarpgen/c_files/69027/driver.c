#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
unsigned long long int var_3 = 5548613732342977465ULL;
unsigned long long int var_5 = 13021008321288959876ULL;
short var_6 = (short)-7901;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1287342648U;
unsigned short var_9 = (unsigned short)54007;
int zero = 0;
int var_10 = -1708355746;
short var_11 = (short)30506;
unsigned long long int var_12 = 17213794730213103961ULL;
unsigned long long int var_13 = 8688546649828530732ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
