#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
long long int var_2 = -4569568512490138081LL;
unsigned char var_3 = (unsigned char)222;
unsigned int var_5 = 2780468932U;
unsigned int var_6 = 1990305755U;
long long int var_7 = -1627984823836394176LL;
unsigned int var_8 = 4022402082U;
unsigned int var_9 = 3111308845U;
unsigned char var_10 = (unsigned char)50;
long long int var_11 = -2915205844427986789LL;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
unsigned char var_14 = (unsigned char)153;
unsigned char var_15 = (unsigned char)0;
unsigned int var_16 = 522760327U;
long long int var_17 = 7738061837044348845LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
