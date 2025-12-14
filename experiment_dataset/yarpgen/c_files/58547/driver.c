#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
unsigned char var_2 = (unsigned char)190;
unsigned long long int var_6 = 6719429331373410231ULL;
unsigned short var_7 = (unsigned short)60296;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 15383445971640248050ULL;
short var_11 = (short)-27619;
int zero = 0;
int var_12 = 28678044;
long long int var_13 = 5973182579579737585LL;
short var_14 = (short)19798;
void init() {
}

void checksum() {
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
