#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5375848784801617374LL;
unsigned int var_2 = 3404372382U;
long long int var_3 = -6348156341053906984LL;
signed char var_5 = (signed char)11;
unsigned long long int var_6 = 10154620235867067130ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 2091702765U;
unsigned short var_13 = (unsigned short)8539;
long long int var_14 = -1826817305006039400LL;
long long int var_16 = 5890203086871191038LL;
int zero = 0;
unsigned short var_19 = (unsigned short)18897;
signed char var_20 = (signed char)62;
unsigned int var_21 = 524995934U;
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
