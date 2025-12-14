#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6104960309073329812LL;
long long int var_3 = 4462187413327918257LL;
int var_4 = 1373782402;
unsigned char var_6 = (unsigned char)227;
short var_8 = (short)7760;
int var_10 = -1428204169;
long long int var_12 = 7997333005149793767LL;
int var_14 = 38485017;
int zero = 0;
long long int var_17 = -780985141748212155LL;
long long int var_18 = 1782586690686519416LL;
unsigned char var_19 = (unsigned char)26;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
