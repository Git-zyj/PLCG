#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5535317222641466860LL;
int var_9 = 1880280895;
unsigned int var_12 = 1448787185U;
int zero = 0;
signed char var_19 = (signed char)-73;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7368926303882729852LL;
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
