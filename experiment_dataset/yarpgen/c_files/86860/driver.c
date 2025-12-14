#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_8 = (unsigned short)25164;
int var_9 = -742136152;
unsigned char var_10 = (unsigned char)250;
unsigned long long int var_11 = 8061375897171630048ULL;
long long int var_12 = 4626187565524991008LL;
unsigned long long int var_13 = 16867730800911707364ULL;
signed char var_14 = (signed char)86;
int zero = 0;
unsigned long long int var_16 = 14453863877650655283ULL;
int var_17 = -1834692437;
signed char var_18 = (signed char)-74;
unsigned char var_19 = (unsigned char)100;
unsigned int var_20 = 3186667767U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
