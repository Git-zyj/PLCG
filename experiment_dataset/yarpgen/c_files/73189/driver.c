#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned long long int var_1 = 6535731676002619693ULL;
unsigned char var_4 = (unsigned char)85;
unsigned char var_5 = (unsigned char)30;
short var_8 = (short)-3542;
unsigned char var_9 = (unsigned char)192;
unsigned long long int var_11 = 9600369556247460632ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)10760;
int var_13 = 227774855;
unsigned long long int var_14 = 18286632499571172ULL;
unsigned int var_15 = 3250105115U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
