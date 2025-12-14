#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27945;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)64;
unsigned short var_8 = (unsigned short)41788;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)164;
long long int var_13 = -8117474238860462499LL;
int zero = 0;
long long int var_14 = 657536559609068079LL;
int var_15 = -1560102424;
int var_16 = -283673228;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
