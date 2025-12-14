#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5244129194722869613ULL;
unsigned long long int var_7 = 1018073973724094236ULL;
unsigned short var_10 = (unsigned short)50160;
long long int var_13 = 6437746902465140223LL;
long long int var_15 = 8163128596881835684LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)108;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -237072439;
unsigned short var_22 = (unsigned short)29082;
unsigned char var_23 = (unsigned char)229;
long long int var_24 = -5847199225737999509LL;
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
