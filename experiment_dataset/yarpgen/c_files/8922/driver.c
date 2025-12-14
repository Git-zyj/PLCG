#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2677119774181742985LL;
unsigned int var_3 = 1127318845U;
unsigned char var_5 = (unsigned char)206;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)27003;
_Bool var_8 = (_Bool)1;
long long int var_9 = -1869301285603547998LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-115;
int zero = 0;
unsigned int var_12 = 887234388U;
unsigned short var_13 = (unsigned short)26290;
void init() {
}

void checksum() {
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
