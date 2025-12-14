#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3165746913246160978LL;
short var_4 = (short)-21789;
short var_5 = (short)13220;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)183;
_Bool var_13 = (_Bool)1;
int var_14 = 481634893;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)14768;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
