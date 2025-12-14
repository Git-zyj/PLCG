#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 762088609;
unsigned char var_3 = (unsigned char)149;
unsigned char var_4 = (unsigned char)137;
unsigned short var_5 = (unsigned short)6862;
unsigned char var_6 = (unsigned char)83;
short var_7 = (short)2787;
unsigned long long int var_9 = 7635011014596446711ULL;
unsigned int var_10 = 1171147086U;
int zero = 0;
unsigned short var_11 = (unsigned short)14801;
unsigned int var_12 = 2059185249U;
int var_13 = -1630583772;
unsigned long long int var_14 = 10965326904130158861ULL;
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
