#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10266;
signed char var_5 = (signed char)-80;
unsigned int var_6 = 564234311U;
unsigned short var_9 = (unsigned short)60934;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 4006665551119460355ULL;
unsigned char var_19 = (unsigned char)106;
unsigned int var_20 = 4095481910U;
unsigned short var_21 = (unsigned short)57587;
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
