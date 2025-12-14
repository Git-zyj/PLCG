#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3783220498333273450LL;
unsigned char var_3 = (unsigned char)228;
int var_6 = 186004760;
long long int var_9 = -1106250203625558337LL;
signed char var_10 = (signed char)-115;
unsigned short var_13 = (unsigned short)3692;
int zero = 0;
unsigned char var_14 = (unsigned char)21;
short var_15 = (short)13107;
long long int var_16 = 3012726296566471235LL;
signed char var_17 = (signed char)-60;
unsigned int var_18 = 698096943U;
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
