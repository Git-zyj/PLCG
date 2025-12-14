#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12932280600811672166ULL;
unsigned char var_3 = (unsigned char)20;
int var_5 = 1518678482;
unsigned char var_6 = (unsigned char)91;
signed char var_7 = (signed char)-54;
signed char var_10 = (signed char)94;
int zero = 0;
short var_11 = (short)5645;
unsigned short var_12 = (unsigned short)60889;
unsigned char var_13 = (unsigned char)15;
unsigned char var_14 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
