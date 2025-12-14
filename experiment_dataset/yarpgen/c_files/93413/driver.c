#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned short var_3 = (unsigned short)6885;
int var_4 = 873121761;
int var_7 = 1897931359;
unsigned short var_8 = (unsigned short)240;
int var_9 = 1071594492;
unsigned long long int var_18 = 706498482213205139ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)51815;
signed char var_20 = (signed char)47;
long long int var_21 = 3398601909872961401LL;
int var_22 = 1190941059;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
