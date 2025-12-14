#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3624083699U;
unsigned short var_4 = (unsigned short)44155;
int var_5 = -1574509825;
short var_6 = (short)-29680;
unsigned long long int var_7 = 14709261814192787294ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14295349958873009095ULL;
int zero = 0;
unsigned int var_11 = 595027805U;
unsigned char var_12 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
