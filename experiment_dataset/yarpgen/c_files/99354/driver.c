#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6106687621609310468ULL;
unsigned int var_1 = 3059889131U;
int var_4 = 1683392898;
unsigned long long int var_5 = 8383487278724759959ULL;
long long int var_6 = 6570099778149866464LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 12884260612409369375ULL;
int var_10 = -243149225;
unsigned short var_14 = (unsigned short)54403;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8767242350722232502LL;
unsigned char var_21 = (unsigned char)111;
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
