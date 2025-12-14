#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
long long int var_5 = 8927234143184756952LL;
unsigned char var_7 = (unsigned char)78;
signed char var_9 = (signed char)115;
long long int var_10 = -4302708554668618211LL;
unsigned short var_13 = (unsigned short)18299;
long long int var_16 = 2169338464160459883LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-100;
unsigned int var_20 = 308629933U;
short var_21 = (short)4186;
unsigned long long int var_22 = 8657714492862050046ULL;
short var_23 = (short)5328;
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
