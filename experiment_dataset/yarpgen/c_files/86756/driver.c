#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2772180595U;
unsigned char var_2 = (unsigned char)106;
unsigned char var_4 = (unsigned char)168;
unsigned short var_5 = (unsigned short)64024;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7084282194664960923LL;
long long int var_10 = -8666769107090043522LL;
int zero = 0;
long long int var_11 = 203317374060408525LL;
unsigned int var_12 = 1619743982U;
unsigned short var_13 = (unsigned short)30233;
unsigned short var_14 = (unsigned short)5365;
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
