#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3396259848U;
unsigned short var_6 = (unsigned short)41461;
unsigned int var_9 = 3172582125U;
int var_10 = 837410350;
signed char var_11 = (signed char)-54;
unsigned char var_12 = (unsigned char)167;
int var_13 = -277078545;
int zero = 0;
int var_14 = 1192751694;
unsigned long long int var_15 = 6932100846813343997ULL;
int var_16 = 2007935687;
int var_17 = 645110936;
short var_18 = (short)12656;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
