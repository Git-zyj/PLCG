#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-15;
unsigned char var_4 = (unsigned char)48;
int var_5 = -244672164;
unsigned int var_6 = 1212954082U;
long long int var_8 = -3142265155755988477LL;
_Bool var_9 = (_Bool)1;
int var_12 = -2123015465;
int zero = 0;
int var_19 = 489785175;
short var_20 = (short)-20113;
signed char var_21 = (signed char)-50;
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
