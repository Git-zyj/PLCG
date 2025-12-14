#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5980855424105996114LL;
int var_4 = 1919643164;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12109773590025593185ULL;
unsigned char var_7 = (unsigned char)219;
unsigned long long int var_11 = 3052025821127756075ULL;
unsigned long long int var_13 = 4768675508862926122ULL;
signed char var_14 = (signed char)1;
int zero = 0;
short var_16 = (short)-23754;
unsigned long long int var_17 = 17731137209210456983ULL;
signed char var_18 = (signed char)-4;
signed char var_19 = (signed char)82;
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
