#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3849563210909993218LL;
unsigned short var_7 = (unsigned short)51614;
unsigned long long int var_10 = 6257159445099633924ULL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)40470;
signed char var_16 = (signed char)-66;
unsigned short var_17 = (unsigned short)12964;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)154;
unsigned short var_20 = (unsigned short)43853;
int var_21 = -743528102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
