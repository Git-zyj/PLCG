#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4435;
unsigned long long int var_1 = 18438814546259413484ULL;
unsigned long long int var_2 = 10631425251486122466ULL;
int var_6 = 553026632;
signed char var_7 = (signed char)-56;
unsigned long long int var_8 = 15031025877476260020ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 15606135107950490113ULL;
unsigned short var_13 = (unsigned short)10678;
unsigned long long int var_15 = 7768719003889986918ULL;
int zero = 0;
unsigned long long int var_16 = 2819185433003137399ULL;
unsigned char var_17 = (unsigned char)18;
unsigned char var_18 = (unsigned char)179;
unsigned short var_19 = (unsigned short)2449;
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
