#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6201195871761664066LL;
short var_6 = (short)-18663;
unsigned short var_7 = (unsigned short)39222;
long long int var_9 = -5810572195673930542LL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)168;
unsigned char var_12 = (unsigned char)26;
signed char var_15 = (signed char)-121;
int zero = 0;
unsigned char var_16 = (unsigned char)22;
unsigned int var_17 = 2502310932U;
long long int var_18 = -1017885265523879727LL;
int var_19 = -1490993814;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
