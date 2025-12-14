#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8516925378566574421ULL;
short var_6 = (short)-19352;
unsigned long long int var_7 = 1741199003122762499ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1732005263;
unsigned char var_11 = (unsigned char)150;
unsigned char var_12 = (unsigned char)18;
unsigned long long int var_13 = 6376413957230000577ULL;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 13088884981073703174ULL;
}

void checksum() {
    hash(&seed, var_10);
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
