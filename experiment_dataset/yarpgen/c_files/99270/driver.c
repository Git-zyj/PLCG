#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8639368525447824590LL;
unsigned char var_9 = (unsigned char)42;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)60;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)124;
long long int var_18 = 7738113864002843644LL;
unsigned short var_19 = (unsigned short)57888;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
