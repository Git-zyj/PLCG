#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
long long int var_4 = -5387954058361492683LL;
signed char var_6 = (signed char)-25;
long long int var_7 = -144256718793946319LL;
signed char var_8 = (signed char)86;
long long int var_9 = 8035642878979952160LL;
unsigned short var_10 = (unsigned short)29088;
unsigned int var_11 = 3246804878U;
signed char var_13 = (signed char)70;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned int var_19 = 4164632106U;
unsigned short var_20 = (unsigned short)24922;
long long int var_21 = 5957895657537063934LL;
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
