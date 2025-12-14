#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2759;
long long int var_1 = 3024282871014322391LL;
unsigned int var_2 = 1576982088U;
short var_3 = (short)17407;
unsigned long long int var_6 = 12259187427659781838ULL;
int var_8 = -47080339;
unsigned long long int var_9 = 4102964650867039131ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-3;
int var_15 = 1306406296;
void init() {
}

void checksum() {
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
