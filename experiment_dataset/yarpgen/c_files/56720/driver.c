#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59701;
unsigned short var_1 = (unsigned short)19065;
long long int var_3 = 112837805402700245LL;
int var_4 = 447985895;
unsigned char var_5 = (unsigned char)20;
short var_6 = (short)9848;
unsigned int var_7 = 2795086488U;
unsigned char var_8 = (unsigned char)219;
unsigned int var_10 = 605198144U;
long long int var_11 = -7720397505421451511LL;
long long int var_12 = 6551831857627353494LL;
int zero = 0;
short var_13 = (short)27571;
long long int var_14 = -6090976568272174846LL;
void init() {
}

void checksum() {
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
