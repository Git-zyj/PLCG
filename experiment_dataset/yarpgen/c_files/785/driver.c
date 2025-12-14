#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-47;
int var_4 = 1958324430;
long long int var_5 = -4380056271861396914LL;
int var_7 = -1237865725;
long long int var_13 = -3825753166832728723LL;
short var_17 = (short)-30152;
int zero = 0;
int var_19 = 618768370;
signed char var_20 = (signed char)-91;
int var_21 = 664383620;
unsigned short var_22 = (unsigned short)8389;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
