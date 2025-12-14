#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1288879447;
_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1184021986U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)9707;
unsigned int var_12 = 2779485828U;
int zero = 0;
int var_13 = -111943106;
long long int var_14 = 970131066697846092LL;
unsigned char var_15 = (unsigned char)155;
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
