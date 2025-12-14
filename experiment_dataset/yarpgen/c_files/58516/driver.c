#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned char var_2 = (unsigned char)31;
unsigned long long int var_4 = 16825857492276284310ULL;
unsigned long long int var_7 = 10049899780494435893ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)37376;
signed char var_13 = (signed char)-20;
unsigned char var_14 = (unsigned char)110;
unsigned long long int var_15 = 10784914185296192259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
