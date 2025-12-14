#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -817095043;
_Bool var_2 = (_Bool)1;
int var_5 = 1566555233;
long long int var_7 = 4223192499532700766LL;
int var_8 = -1458250805;
long long int var_10 = 3466968853997864081LL;
int var_13 = -81238060;
signed char var_14 = (signed char)-66;
unsigned short var_15 = (unsigned short)13580;
int zero = 0;
signed char var_18 = (signed char)-25;
signed char var_19 = (signed char)86;
void init() {
}

void checksum() {
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
