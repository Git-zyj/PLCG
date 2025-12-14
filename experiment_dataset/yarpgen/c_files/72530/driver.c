#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned char var_1 = (unsigned char)20;
unsigned char var_2 = (unsigned char)75;
unsigned char var_4 = (unsigned char)117;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)121;
unsigned int var_8 = 1949686887U;
signed char var_9 = (signed char)-6;
unsigned int var_10 = 1770315963U;
int zero = 0;
signed char var_11 = (signed char)78;
unsigned int var_12 = 2353016414U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1782980897U;
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
