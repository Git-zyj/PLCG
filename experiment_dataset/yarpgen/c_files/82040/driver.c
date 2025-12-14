#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 856272839U;
unsigned char var_3 = (unsigned char)162;
unsigned int var_4 = 3909391106U;
long long int var_5 = 3864888018177140073LL;
unsigned char var_6 = (unsigned char)82;
long long int var_9 = 8129322190534354080LL;
unsigned int var_10 = 939511528U;
unsigned long long int var_11 = 2429945667076454355ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
long long int var_14 = -5869042337078325612LL;
long long int var_15 = -1911722984202166052LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
