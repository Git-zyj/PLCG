#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
signed char var_2 = (signed char)-119;
int var_4 = -1005728043;
signed char var_8 = (signed char)-55;
int zero = 0;
unsigned short var_10 = (unsigned short)14236;
unsigned long long int var_11 = 7827623181905374863ULL;
unsigned int var_12 = 3851890586U;
unsigned long long int var_13 = 4462219763022888078ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
