#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29876;
short var_5 = (short)5588;
unsigned short var_9 = (unsigned short)29426;
short var_12 = (short)-27380;
unsigned int var_13 = 3488362744U;
unsigned long long int var_16 = 846957649670472560ULL;
int zero = 0;
unsigned int var_18 = 2317284766U;
unsigned int var_19 = 2271731267U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
