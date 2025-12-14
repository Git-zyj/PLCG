#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32770;
unsigned short var_5 = (unsigned short)50395;
long long int var_9 = 8001957573898149656LL;
unsigned int var_11 = 3181628914U;
unsigned long long int var_13 = 7561394495525591371ULL;
int var_16 = 1257901652;
int zero = 0;
long long int var_17 = -8472186725103916463LL;
unsigned int var_18 = 1229362292U;
signed char var_19 = (signed char)74;
void init() {
}

void checksum() {
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
