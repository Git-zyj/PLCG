#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)34;
unsigned short var_11 = (unsigned short)26000;
int var_13 = -96517659;
unsigned long long int var_14 = 1980319566026886373ULL;
unsigned short var_16 = (unsigned short)46714;
unsigned long long int var_17 = 133880981076218526ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -756859815;
unsigned short var_20 = (unsigned short)22135;
_Bool var_21 = (_Bool)0;
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
