#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4207;
unsigned long long int var_3 = 9346611061782264495ULL;
unsigned long long int var_5 = 12135043411562794526ULL;
long long int var_6 = -4035003923929810326LL;
unsigned char var_7 = (unsigned char)12;
short var_8 = (short)31720;
short var_9 = (short)10359;
unsigned char var_10 = (unsigned char)3;
short var_14 = (short)-21536;
int zero = 0;
short var_18 = (short)24431;
unsigned long long int var_19 = 3170284392706680568ULL;
short var_20 = (short)-5153;
int var_21 = -829573908;
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
