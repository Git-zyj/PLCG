#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1082720336277218248LL;
short var_2 = (short)4140;
unsigned short var_3 = (unsigned short)46890;
short var_7 = (short)27424;
int var_8 = 652901937;
short var_9 = (short)-28560;
int var_13 = -1535040250;
short var_14 = (short)-26174;
int zero = 0;
long long int var_16 = -8534786886130562706LL;
signed char var_17 = (signed char)67;
unsigned short var_18 = (unsigned short)27659;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
