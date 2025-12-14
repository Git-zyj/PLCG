#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -776823992;
signed char var_3 = (signed char)51;
_Bool var_4 = (_Bool)0;
int var_5 = 1099669637;
long long int var_6 = 756367569904754296LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_19 = 606401747;
unsigned long long int var_20 = 6451299098866939757ULL;
signed char var_21 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
