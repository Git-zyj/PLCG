#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1442906281;
unsigned long long int var_2 = 5340844969533842353ULL;
signed char var_3 = (signed char)-27;
unsigned char var_4 = (unsigned char)228;
short var_8 = (short)8675;
int var_10 = 2065395629;
int var_11 = 936582336;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 7306998346840667109ULL;
signed char var_18 = (signed char)6;
unsigned long long int var_19 = 9176267477387246747ULL;
short var_20 = (short)-29665;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
