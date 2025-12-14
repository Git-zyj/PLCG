#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 143705155U;
unsigned long long int var_2 = 1695951990985962043ULL;
unsigned int var_5 = 2744662637U;
unsigned short var_7 = (unsigned short)49841;
unsigned char var_8 = (unsigned char)15;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-58;
long long int var_11 = -7974779674046430071LL;
unsigned int var_12 = 2586187563U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
