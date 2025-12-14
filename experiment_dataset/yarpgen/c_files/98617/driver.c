#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30612;
int var_2 = -2089073675;
unsigned short var_4 = (unsigned short)16543;
signed char var_9 = (signed char)74;
unsigned char var_10 = (unsigned char)100;
long long int var_11 = -1884942258060815348LL;
short var_12 = (short)-18383;
int zero = 0;
signed char var_15 = (signed char)-44;
int var_16 = -333188040;
signed char var_17 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
