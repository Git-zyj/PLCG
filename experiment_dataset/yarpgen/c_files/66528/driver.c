#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23741;
unsigned char var_2 = (unsigned char)112;
unsigned short var_3 = (unsigned short)18225;
int var_4 = -1862742799;
signed char var_6 = (signed char)29;
unsigned int var_7 = 1954790846U;
long long int var_9 = 4376825569951802840LL;
int zero = 0;
unsigned int var_12 = 2740042566U;
signed char var_13 = (signed char)89;
short var_14 = (short)3386;
unsigned short var_15 = (unsigned short)18846;
unsigned char var_16 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
