#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1232408400563683939LL;
unsigned short var_1 = (unsigned short)33837;
unsigned int var_3 = 3518590539U;
unsigned int var_5 = 2729077619U;
unsigned short var_6 = (unsigned short)54195;
unsigned char var_8 = (unsigned char)46;
unsigned char var_9 = (unsigned char)89;
short var_10 = (short)14434;
int var_11 = 932024190;
signed char var_13 = (signed char)63;
long long int var_14 = 677537518291793239LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 588958228;
long long int var_17 = 3380016052634525114LL;
signed char var_18 = (signed char)-106;
unsigned short var_19 = (unsigned short)43305;
signed char var_20 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
