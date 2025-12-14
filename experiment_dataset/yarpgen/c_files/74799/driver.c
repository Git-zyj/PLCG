#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)93;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-17284;
short var_11 = (short)1380;
unsigned long long int var_14 = 4876768360148247687ULL;
int zero = 0;
signed char var_17 = (signed char)-63;
unsigned char var_18 = (unsigned char)115;
short var_19 = (short)-21517;
short var_20 = (short)28458;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
