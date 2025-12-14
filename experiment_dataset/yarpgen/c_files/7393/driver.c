#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -26756182;
signed char var_1 = (signed char)-52;
unsigned char var_4 = (unsigned char)67;
unsigned char var_5 = (unsigned char)216;
unsigned char var_6 = (unsigned char)3;
signed char var_7 = (signed char)-66;
unsigned long long int var_9 = 4161436770777837129ULL;
int var_10 = -993344800;
int var_11 = -2120523262;
long long int var_12 = 148571576408730740LL;
int zero = 0;
long long int var_16 = -767415398627140666LL;
unsigned char var_17 = (unsigned char)194;
unsigned char var_18 = (unsigned char)214;
long long int var_19 = 6203027278331470278LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
