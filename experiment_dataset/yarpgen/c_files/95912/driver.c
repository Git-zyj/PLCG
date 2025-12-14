#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7693715603490808624LL;
unsigned int var_1 = 797654260U;
unsigned int var_6 = 2773810236U;
unsigned long long int var_7 = 13992682308421603399ULL;
unsigned short var_8 = (unsigned short)57046;
long long int var_9 = 7084903844793471976LL;
int zero = 0;
unsigned char var_11 = (unsigned char)104;
unsigned short var_12 = (unsigned short)3657;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
