#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
short var_1 = (short)-12581;
long long int var_2 = -1833170150361794413LL;
unsigned char var_6 = (unsigned char)229;
short var_7 = (short)27939;
unsigned char var_8 = (unsigned char)104;
short var_9 = (short)7792;
signed char var_10 = (signed char)-98;
int zero = 0;
short var_11 = (short)9629;
short var_12 = (short)20348;
long long int var_13 = -5221471942929113433LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
