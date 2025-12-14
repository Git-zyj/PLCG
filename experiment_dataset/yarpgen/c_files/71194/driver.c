#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned short var_1 = (unsigned short)26848;
signed char var_2 = (signed char)-66;
signed char var_3 = (signed char)105;
signed char var_4 = (signed char)-50;
unsigned char var_5 = (unsigned char)241;
short var_6 = (short)-8122;
int var_7 = 596538110;
unsigned long long int var_9 = 5013122903537552605ULL;
int var_12 = 2042591746;
int zero = 0;
int var_18 = 1441157564;
_Bool var_19 = (_Bool)0;
int var_20 = 1261488084;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
