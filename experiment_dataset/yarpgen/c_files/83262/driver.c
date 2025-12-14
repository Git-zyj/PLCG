#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1169763790;
signed char var_2 = (signed char)107;
long long int var_5 = -619884501478071197LL;
long long int var_7 = -5009394623237361453LL;
signed char var_9 = (signed char)-39;
int zero = 0;
unsigned short var_12 = (unsigned short)27465;
signed char var_13 = (signed char)-84;
unsigned short var_14 = (unsigned short)54041;
short arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)23425;
}

void checksum() {
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
