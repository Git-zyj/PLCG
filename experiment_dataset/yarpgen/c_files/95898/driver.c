#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 10793985382022999128ULL;
int var_4 = 1802082836;
unsigned short var_8 = (unsigned short)1669;
unsigned long long int var_9 = 3146138820598350498ULL;
unsigned char var_12 = (unsigned char)202;
long long int var_13 = 2551783755846734203LL;
unsigned short var_15 = (unsigned short)15228;
int zero = 0;
unsigned long long int var_16 = 6369135646160867650ULL;
unsigned int var_17 = 1265614902U;
long long int var_18 = 3098260944239036359LL;
short var_19 = (short)22174;
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
