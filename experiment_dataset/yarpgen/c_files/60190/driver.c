#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8094824079182787340ULL;
long long int var_3 = -868814840130906521LL;
long long int var_6 = -2184315085932579001LL;
signed char var_9 = (signed char)127;
unsigned char var_14 = (unsigned char)220;
short var_15 = (short)8368;
int zero = 0;
unsigned char var_19 = (unsigned char)100;
unsigned short var_20 = (unsigned short)41917;
signed char var_21 = (signed char)-29;
short var_22 = (short)15068;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
