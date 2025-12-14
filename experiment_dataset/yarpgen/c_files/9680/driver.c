#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)40;
unsigned short var_8 = (unsigned short)20989;
signed char var_9 = (signed char)-127;
int var_11 = 1543320767;
_Bool var_13 = (_Bool)0;
int var_15 = -1604948908;
int zero = 0;
int var_16 = -677810259;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-66;
unsigned short var_19 = (unsigned short)62679;
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
