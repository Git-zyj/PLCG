#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
long long int var_2 = 3771435332522546246LL;
short var_5 = (short)21526;
int var_8 = 193567291;
unsigned int var_9 = 809925564U;
unsigned char var_14 = (unsigned char)229;
unsigned int var_16 = 2526144341U;
int zero = 0;
unsigned char var_18 = (unsigned char)61;
long long int var_19 = 3602700602998523453LL;
unsigned int var_20 = 3272684108U;
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
