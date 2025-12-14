#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1549221289;
unsigned int var_6 = 3154402330U;
unsigned long long int var_7 = 12399116313873177049ULL;
short var_9 = (short)19700;
unsigned char var_10 = (unsigned char)202;
signed char var_12 = (signed char)-1;
short var_14 = (short)16701;
unsigned char var_16 = (unsigned char)62;
unsigned short var_17 = (unsigned short)31120;
unsigned char var_18 = (unsigned char)213;
int zero = 0;
short var_20 = (short)31368;
unsigned short var_21 = (unsigned short)8302;
int var_22 = 1322642380;
unsigned long long int var_23 = 6765334872232560513ULL;
short var_24 = (short)16918;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
