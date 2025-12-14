#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1892968461886568738ULL;
unsigned long long int var_1 = 7219039036311493034ULL;
unsigned long long int var_2 = 12233574358742419024ULL;
unsigned char var_5 = (unsigned char)48;
unsigned long long int var_6 = 12214138810590843145ULL;
signed char var_7 = (signed char)15;
unsigned long long int var_8 = 9181240247809308165ULL;
long long int var_10 = -684439613478609380LL;
unsigned int var_11 = 194281068U;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)96;
unsigned char var_15 = (unsigned char)245;
unsigned short var_16 = (unsigned short)31672;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
