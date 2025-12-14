#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1896355788215603701ULL;
short var_4 = (short)-30482;
unsigned char var_5 = (unsigned char)80;
short var_6 = (short)-9659;
short var_7 = (short)28908;
unsigned int var_8 = 1146706886U;
unsigned long long int var_9 = 5294014918273286115ULL;
int zero = 0;
signed char var_12 = (signed char)-29;
short var_13 = (short)-26534;
short var_14 = (short)-8004;
void init() {
}

void checksum() {
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
