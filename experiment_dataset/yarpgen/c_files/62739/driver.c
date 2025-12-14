#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
signed char var_1 = (signed char)-123;
unsigned long long int var_2 = 13832423221021373463ULL;
unsigned int var_4 = 1769617015U;
unsigned short var_5 = (unsigned short)22609;
unsigned long long int var_6 = 14295158790464788090ULL;
signed char var_8 = (signed char)100;
short var_9 = (short)12864;
unsigned int var_12 = 1566725861U;
int zero = 0;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)-95;
long long int var_17 = 5372928828899911757LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5534229246491835767LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
