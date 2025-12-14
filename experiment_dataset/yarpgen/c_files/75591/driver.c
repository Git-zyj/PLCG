#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1233626201;
unsigned char var_5 = (unsigned char)78;
long long int var_6 = 7329778980301472936LL;
long long int var_8 = 5457464534156546348LL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)49773;
unsigned long long int var_12 = 13263094087850702889ULL;
int zero = 0;
unsigned long long int var_13 = 7163175209845910370ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
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
