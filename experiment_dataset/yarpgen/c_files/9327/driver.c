#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30983;
int var_1 = 365914425;
unsigned char var_3 = (unsigned char)206;
int var_6 = 739081915;
short var_8 = (short)-6419;
unsigned long long int var_10 = 13045307316323234165ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1176246817;
long long int var_14 = 3387663899130576968LL;
signed char var_15 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
