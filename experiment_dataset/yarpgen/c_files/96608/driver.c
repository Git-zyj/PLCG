#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3267602890285321304LL;
signed char var_4 = (signed char)95;
unsigned char var_7 = (unsigned char)72;
unsigned long long int var_9 = 17504590131318915694ULL;
short var_10 = (short)-18132;
unsigned int var_11 = 640181323U;
unsigned char var_12 = (unsigned char)159;
long long int var_14 = -3918583278456620750LL;
signed char var_16 = (signed char)106;
int var_17 = -227654240;
int zero = 0;
long long int var_18 = -4125892248676077165LL;
long long int var_19 = -6080699174797509796LL;
unsigned char var_20 = (unsigned char)11;
int var_21 = 961385766;
int var_22 = -745938019;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
