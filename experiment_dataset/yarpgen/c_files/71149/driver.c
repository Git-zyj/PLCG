#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
unsigned long long int var_3 = 1330454248349059446ULL;
unsigned short var_4 = (unsigned short)15091;
unsigned short var_6 = (unsigned short)14754;
unsigned char var_12 = (unsigned char)31;
unsigned long long int var_13 = 11876393239449013249ULL;
signed char var_14 = (signed char)73;
int zero = 0;
unsigned long long int var_20 = 8237764821260744082ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)18232;
signed char var_23 = (signed char)-72;
void init() {
}

void checksum() {
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
