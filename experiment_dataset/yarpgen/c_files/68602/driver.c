#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
long long int var_4 = 6812739462712633700LL;
unsigned char var_6 = (unsigned char)232;
long long int var_8 = -759232135694135393LL;
int var_11 = 1230403275;
int var_13 = -1098277546;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2928893946U;
long long int var_17 = 8170111492996784967LL;
signed char var_18 = (signed char)-125;
signed char var_19 = (signed char)104;
int zero = 0;
unsigned short var_20 = (unsigned short)2468;
signed char var_21 = (signed char)10;
unsigned long long int var_22 = 17958141372807914236ULL;
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
