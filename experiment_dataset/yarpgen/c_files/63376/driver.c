#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41984;
signed char var_3 = (signed char)-127;
short var_8 = (short)19908;
int var_11 = -1395008930;
int zero = 0;
unsigned long long int var_15 = 3394705908769368705ULL;
signed char var_16 = (signed char)-35;
unsigned long long int var_17 = 3716259953084070855ULL;
signed char var_18 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
