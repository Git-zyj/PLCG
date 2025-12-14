#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29203;
signed char var_2 = (signed char)88;
unsigned char var_3 = (unsigned char)110;
unsigned short var_5 = (unsigned short)22776;
unsigned long long int var_6 = 10597395616946612117ULL;
unsigned long long int var_7 = 17909162036275201772ULL;
unsigned short var_9 = (unsigned short)21637;
int zero = 0;
short var_10 = (short)-25109;
short var_11 = (short)9687;
int var_12 = -1319791086;
signed char var_13 = (signed char)106;
long long int var_14 = 5796258636144547959LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
