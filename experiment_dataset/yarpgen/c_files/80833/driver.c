#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13979849086517107051ULL;
unsigned short var_4 = (unsigned short)20637;
unsigned long long int var_9 = 6924737186512625153ULL;
unsigned short var_17 = (unsigned short)53013;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-49;
unsigned short var_20 = (unsigned short)19524;
unsigned long long int var_21 = 552902622417039042ULL;
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
