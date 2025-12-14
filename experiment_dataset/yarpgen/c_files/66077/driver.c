#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2714984340U;
unsigned long long int var_1 = 3003710473445973490ULL;
short var_7 = (short)15487;
unsigned short var_11 = (unsigned short)57326;
long long int var_12 = -1287686689716024046LL;
unsigned char var_14 = (unsigned char)21;
unsigned char var_16 = (unsigned char)37;
unsigned short var_18 = (unsigned short)15519;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)52;
int var_21 = 2117675521;
unsigned int var_22 = 978847772U;
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
