#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-25;
int var_6 = 362954858;
unsigned long long int var_7 = 3304767279458214772ULL;
signed char var_9 = (signed char)116;
unsigned int var_10 = 3250381577U;
_Bool var_11 = (_Bool)0;
int var_14 = 1682950583;
int zero = 0;
unsigned char var_18 = (unsigned char)147;
unsigned short var_19 = (unsigned short)40005;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
