#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1543218796U;
unsigned long long int var_1 = 15378502477151797259ULL;
unsigned short var_2 = (unsigned short)4982;
short var_3 = (short)12297;
unsigned long long int var_4 = 12843938749789137045ULL;
unsigned char var_5 = (unsigned char)68;
unsigned long long int var_6 = 7128998848041290610ULL;
unsigned int var_7 = 190491314U;
int var_8 = 611183673;
long long int var_9 = 38550355643417507LL;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
long long int var_11 = 3073399050506927278LL;
int var_12 = -1128567732;
unsigned int var_13 = 1563862699U;
unsigned int var_14 = 3496936960U;
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
