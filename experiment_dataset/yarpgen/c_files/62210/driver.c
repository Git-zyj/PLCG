#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1363781657;
long long int var_3 = -302971545603902460LL;
unsigned long long int var_4 = 5327017223448732212ULL;
unsigned int var_5 = 1324702728U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 300897917U;
unsigned long long int var_8 = 10744599318132394211ULL;
int var_9 = -1514749443;
int var_10 = -214262785;
int zero = 0;
long long int var_14 = 1906991711015464916LL;
unsigned short var_15 = (unsigned short)18850;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
