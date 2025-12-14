#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -931807659;
long long int var_3 = 6706748575817711444LL;
signed char var_4 = (signed char)90;
unsigned int var_6 = 4286772773U;
signed char var_8 = (signed char)-43;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5954143138979078865LL;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)22411;
long long int var_14 = -6347870116615028121LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
