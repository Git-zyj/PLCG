#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
int var_3 = 1218851527;
unsigned char var_4 = (unsigned char)46;
unsigned int var_6 = 1283318095U;
signed char var_8 = (signed char)-56;
signed char var_9 = (signed char)-63;
int zero = 0;
int var_10 = 1088585813;
short var_11 = (short)6710;
unsigned int var_12 = 3687492822U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
