#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
_Bool var_3 = (_Bool)0;
int var_6 = 1556819948;
long long int var_7 = -7769081057045720372LL;
long long int var_8 = -7562238307256555141LL;
long long int var_9 = -7492580165289209772LL;
long long int var_10 = -834106039842323011LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)155;
long long int var_13 = 7073931168191891618LL;
long long int var_14 = -6853532220153361326LL;
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
