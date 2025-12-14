#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -4335524713731479783LL;
int var_8 = 1624384199;
signed char var_9 = (signed char)4;
int var_10 = -1228909834;
int var_14 = 426444132;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1359881434;
unsigned short var_20 = (unsigned short)34292;
void init() {
}

void checksum() {
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
