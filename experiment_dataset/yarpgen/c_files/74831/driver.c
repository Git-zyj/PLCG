#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6578;
int var_5 = 1275749490;
unsigned char var_7 = (unsigned char)44;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 10673104597060660739ULL;
unsigned char var_12 = (unsigned char)55;
int zero = 0;
signed char var_16 = (signed char)-45;
short var_17 = (short)2863;
unsigned char var_18 = (unsigned char)180;
int var_19 = -223165869;
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
