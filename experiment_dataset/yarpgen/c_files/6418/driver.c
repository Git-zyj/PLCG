#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9024031451717059149LL;
unsigned short var_3 = (unsigned short)18238;
unsigned short var_4 = (unsigned short)5917;
unsigned short var_6 = (unsigned short)53868;
long long int var_10 = 6220179525525834976LL;
long long int var_12 = 3182571167061157324LL;
unsigned short var_13 = (unsigned short)60077;
unsigned short var_16 = (unsigned short)60926;
int zero = 0;
long long int var_18 = 7267884762995463025LL;
unsigned short var_19 = (unsigned short)54332;
long long int var_20 = 1385782162096658413LL;
long long int var_21 = 6514058013915530476LL;
unsigned short var_22 = (unsigned short)3794;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
