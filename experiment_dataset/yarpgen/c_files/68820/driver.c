#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 641861059843119473ULL;
unsigned short var_8 = (unsigned short)32105;
unsigned long long int var_10 = 10765392667289123332ULL;
short var_15 = (short)-1015;
int var_17 = -1626581889;
int zero = 0;
signed char var_18 = (signed char)-53;
unsigned int var_19 = 3104066075U;
int var_20 = 393019560;
unsigned long long int var_21 = 15601305072276394660ULL;
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
