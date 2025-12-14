#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2241356369132948008ULL;
unsigned short var_5 = (unsigned short)21995;
unsigned long long int var_6 = 7084426682814003441ULL;
unsigned long long int var_7 = 12960177879496161326ULL;
long long int var_8 = 1612444743704831242LL;
signed char var_9 = (signed char)-123;
unsigned long long int var_10 = 18419144617562877072ULL;
unsigned long long int var_12 = 259295160548805881ULL;
int var_14 = -1570836099;
unsigned short var_15 = (unsigned short)41994;
int zero = 0;
unsigned short var_16 = (unsigned short)4018;
int var_17 = 1887667221;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)21733;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
