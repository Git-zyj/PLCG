#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22294;
int var_7 = -1410947109;
signed char var_8 = (signed char)-69;
int var_9 = -2034540292;
long long int var_13 = 851112852259560946LL;
int zero = 0;
int var_17 = -1761587329;
unsigned int var_18 = 3502110568U;
short var_19 = (short)22752;
void init() {
}

void checksum() {
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
