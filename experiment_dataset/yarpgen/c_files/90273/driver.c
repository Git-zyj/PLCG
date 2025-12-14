#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2431708494U;
unsigned long long int var_4 = 5036254193088420731ULL;
unsigned short var_7 = (unsigned short)23321;
signed char var_9 = (signed char)19;
unsigned long long int var_12 = 4778375123026867819ULL;
unsigned short var_13 = (unsigned short)60329;
long long int var_14 = -6402404094955883882LL;
unsigned long long int var_16 = 13423414347947054866ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)22617;
long long int var_20 = -7974544923606132461LL;
unsigned short var_21 = (unsigned short)58287;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
