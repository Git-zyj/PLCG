#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31592;
unsigned long long int var_5 = 15874771470147078222ULL;
unsigned int var_7 = 2761004090U;
unsigned int var_9 = 518417466U;
long long int var_11 = 4709568383615316487LL;
int var_12 = 564864394;
int zero = 0;
short var_16 = (short)27536;
unsigned char var_17 = (unsigned char)219;
unsigned short var_18 = (unsigned short)11276;
unsigned short var_19 = (unsigned short)8750;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
