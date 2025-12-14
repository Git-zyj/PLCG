#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned char var_1 = (unsigned char)73;
signed char var_2 = (signed char)-44;
signed char var_12 = (signed char)-21;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
long long int var_18 = -3299937701491637405LL;
unsigned short var_19 = (unsigned short)47860;
long long int var_20 = -3130436532901847739LL;
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
