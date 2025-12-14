#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14332;
unsigned short var_3 = (unsigned short)54734;
unsigned long long int var_4 = 12995890741427338518ULL;
signed char var_6 = (signed char)-113;
long long int var_7 = -7933674357562306109LL;
int var_10 = 481641638;
signed char var_15 = (signed char)-84;
int zero = 0;
int var_16 = 724505514;
long long int var_17 = -3046042615564121216LL;
unsigned long long int var_18 = 12684132871495405756ULL;
short var_19 = (short)17945;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
