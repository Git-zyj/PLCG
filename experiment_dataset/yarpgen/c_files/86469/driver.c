#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19319;
unsigned int var_9 = 987302863U;
unsigned long long int var_10 = 15240946331525901051ULL;
unsigned char var_12 = (unsigned char)145;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-5630;
short var_16 = (short)-28303;
long long int var_19 = 3434769631553118132LL;
int zero = 0;
signed char var_20 = (signed char)-106;
unsigned long long int var_21 = 6241872136270513322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
