#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3102350452U;
unsigned char var_1 = (unsigned char)18;
int var_2 = 121397871;
long long int var_3 = -2896475284934090508LL;
unsigned short var_5 = (unsigned short)25093;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1752327436U;
int zero = 0;
signed char var_12 = (signed char)-27;
short var_13 = (short)14381;
unsigned short var_14 = (unsigned short)53294;
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
