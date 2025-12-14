#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3862957178190296712LL;
long long int var_3 = -429226612405482888LL;
int var_5 = 1657780611;
long long int var_7 = -2938759814916829139LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)115;
signed char var_10 = (signed char)64;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-25;
unsigned char var_14 = (unsigned char)28;
signed char var_15 = (signed char)-11;
unsigned short var_17 = (unsigned short)45938;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
long long int var_19 = 2081205518786748297LL;
unsigned short var_20 = (unsigned short)56381;
int var_21 = 1578211241;
int var_22 = -1847249696;
int var_23 = -2091701495;
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
