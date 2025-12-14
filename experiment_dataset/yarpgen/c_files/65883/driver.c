#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
unsigned long long int var_2 = 176226698894052248ULL;
unsigned long long int var_3 = 2504588536834893750ULL;
unsigned char var_4 = (unsigned char)137;
short var_5 = (short)20950;
unsigned int var_6 = 2579835667U;
unsigned short var_7 = (unsigned short)37068;
unsigned short var_8 = (unsigned short)57318;
signed char var_9 = (signed char)6;
int zero = 0;
unsigned int var_10 = 489551192U;
unsigned int var_11 = 256945122U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
