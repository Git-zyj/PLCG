#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned char var_1 = (unsigned char)50;
unsigned char var_6 = (unsigned char)248;
signed char var_7 = (signed char)113;
long long int var_8 = 2175793977708263840LL;
long long int var_9 = 8232934913387235281LL;
unsigned int var_10 = 2838324181U;
long long int var_12 = 2590955723680419250LL;
_Bool var_13 = (_Bool)0;
unsigned int var_17 = 2190397414U;
int zero = 0;
long long int var_19 = 4227593927324799606LL;
unsigned int var_20 = 667622088U;
unsigned int var_21 = 3644458337U;
unsigned int var_22 = 2281812607U;
unsigned char var_23 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
