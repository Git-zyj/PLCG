#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2755513442U;
unsigned char var_4 = (unsigned char)238;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)191;
unsigned char var_11 = (unsigned char)251;
int var_12 = 791308217;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2347496518U;
unsigned short var_18 = (unsigned short)36593;
int zero = 0;
unsigned short var_19 = (unsigned short)41578;
unsigned char var_20 = (unsigned char)61;
unsigned short var_21 = (unsigned short)31756;
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
