#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36974;
unsigned int var_2 = 827357111U;
short var_5 = (short)-29593;
_Bool var_6 = (_Bool)1;
long long int var_9 = 2915785329693402692LL;
int zero = 0;
int var_12 = 120480334;
long long int var_13 = 4666786730981064301LL;
int var_14 = -935345363;
void init() {
}

void checksum() {
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
