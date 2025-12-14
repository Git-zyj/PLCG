#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
long long int var_2 = 1324987500864111736LL;
long long int var_3 = 5311836988373070065LL;
unsigned long long int var_10 = 12569292352735824988ULL;
long long int var_13 = 753819331764126707LL;
int var_14 = 598912173;
long long int var_17 = -3532914671617924920LL;
long long int var_18 = 426414506911073167LL;
int zero = 0;
unsigned short var_19 = (unsigned short)18846;
int var_20 = -762314756;
long long int var_21 = -8072985304498674758LL;
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
