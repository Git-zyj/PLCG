#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17336;
int var_1 = -1849469953;
long long int var_5 = -9108852721215435701LL;
unsigned int var_7 = 2240951274U;
unsigned long long int var_8 = 16523394041920055042ULL;
unsigned short var_10 = (unsigned short)65143;
long long int var_11 = -671429255045630000LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)32270;
void init() {
}

void checksum() {
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
