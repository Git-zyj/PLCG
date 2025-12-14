#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3143162912510029092ULL;
unsigned long long int var_2 = 5610860482833974822ULL;
unsigned char var_3 = (unsigned char)139;
int var_4 = 745878161;
short var_5 = (short)-28332;
unsigned long long int var_9 = 12672748154668923639ULL;
unsigned long long int var_11 = 11113695184161616826ULL;
long long int var_12 = 2411335731376220705LL;
long long int var_13 = -976328523425667254LL;
unsigned char var_14 = (unsigned char)80;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)84;
long long int var_19 = -7935325499695734295LL;
int zero = 0;
short var_20 = (short)27024;
unsigned long long int var_21 = 11531545534748091664ULL;
unsigned char var_22 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
