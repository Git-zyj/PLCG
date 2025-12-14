#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2722457540U;
unsigned long long int var_1 = 16606429165590131597ULL;
long long int var_2 = -1235375788505886488LL;
unsigned long long int var_3 = 3443014541389096730ULL;
unsigned long long int var_4 = 662467012256329933ULL;
long long int var_6 = 288603220218211528LL;
unsigned short var_7 = (unsigned short)55803;
unsigned long long int var_8 = 4643160914010501357ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)156;
short var_13 = (short)30590;
unsigned int var_15 = 2919194083U;
int zero = 0;
unsigned long long int var_18 = 7088830880240229845ULL;
unsigned long long int var_19 = 15335709038374554997ULL;
unsigned short var_20 = (unsigned short)57453;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
