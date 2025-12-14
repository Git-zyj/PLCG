#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18382;
int var_3 = 1265538285;
short var_4 = (short)-28856;
unsigned char var_5 = (unsigned char)79;
short var_11 = (short)14914;
unsigned int var_14 = 3315590855U;
int zero = 0;
long long int var_15 = 4942498162955863418LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)119;
unsigned short var_18 = (unsigned short)38009;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
