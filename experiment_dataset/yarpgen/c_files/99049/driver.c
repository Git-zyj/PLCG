#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)28;
long long int var_4 = 5326989640257221856LL;
short var_6 = (short)17454;
unsigned char var_7 = (unsigned char)206;
unsigned char var_9 = (unsigned char)14;
unsigned char var_11 = (unsigned char)12;
long long int var_13 = -7967458473946913230LL;
unsigned char var_16 = (unsigned char)143;
long long int var_18 = 1587503823138436088LL;
int zero = 0;
unsigned char var_19 = (unsigned char)163;
unsigned long long int var_20 = 14134063728464801940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
