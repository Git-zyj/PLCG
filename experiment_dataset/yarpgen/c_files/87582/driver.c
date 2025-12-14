#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)86;
unsigned long long int var_3 = 7047264335010921648ULL;
short var_4 = (short)-32482;
unsigned int var_5 = 1491905362U;
short var_6 = (short)-29128;
signed char var_7 = (signed char)-37;
long long int var_8 = -8462163500676546269LL;
signed char var_9 = (signed char)2;
int zero = 0;
unsigned int var_10 = 1468881546U;
signed char var_11 = (signed char)-65;
signed char var_12 = (signed char)106;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
