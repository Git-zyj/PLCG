#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7360686087170622927LL;
int var_1 = -1602438894;
unsigned short var_4 = (unsigned short)49153;
unsigned short var_6 = (unsigned short)18046;
unsigned long long int var_8 = 7160038236726877764ULL;
unsigned long long int var_9 = 16257251526077412820ULL;
int var_10 = 477419771;
unsigned char var_12 = (unsigned char)202;
unsigned int var_13 = 504812525U;
unsigned int var_14 = 2694726436U;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3470629194294956913LL;
unsigned short var_19 = (unsigned short)42561;
short var_20 = (short)19639;
long long int var_21 = 9045044129733608187LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
