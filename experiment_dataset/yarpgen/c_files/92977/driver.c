#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -175863343;
unsigned char var_3 = (unsigned char)116;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 482338447U;
unsigned long long int var_6 = 13110704859852662288ULL;
short var_8 = (short)-29677;
unsigned long long int var_9 = 7801459649129649076ULL;
int zero = 0;
long long int var_11 = 6279663257760924346LL;
unsigned long long int var_12 = 5702008432933322046ULL;
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
