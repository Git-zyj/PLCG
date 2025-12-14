#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19361;
signed char var_4 = (signed char)-37;
signed char var_6 = (signed char)66;
unsigned int var_7 = 3079589085U;
signed char var_8 = (signed char)-31;
signed char var_12 = (signed char)114;
unsigned int var_14 = 1702070752U;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
signed char var_20 = (signed char)-82;
unsigned int var_21 = 942928862U;
unsigned long long int var_22 = 5226375052520439980ULL;
long long int var_23 = 2356443136267763275LL;
unsigned short var_24 = (unsigned short)52767;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
