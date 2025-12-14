#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 203991751;
unsigned short var_3 = (unsigned short)1142;
int var_5 = 1350683543;
int var_6 = -137489677;
long long int var_8 = 6413338936854206796LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)97;
long long int var_13 = 1404474673497598806LL;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)5861;
unsigned short var_19 = (unsigned short)19836;
unsigned short var_20 = (unsigned short)36564;
signed char var_21 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
