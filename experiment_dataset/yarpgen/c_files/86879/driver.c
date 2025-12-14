#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13681244029263956044ULL;
long long int var_1 = -2221528030327784768LL;
unsigned int var_5 = 2788473029U;
unsigned int var_6 = 22082138U;
unsigned int var_7 = 2710142686U;
unsigned int var_8 = 3019280318U;
long long int var_9 = 4560027801136258142LL;
signed char var_12 = (signed char)89;
short var_13 = (short)28040;
int zero = 0;
unsigned char var_14 = (unsigned char)205;
long long int var_15 = -267080068379602573LL;
unsigned long long int var_16 = 14300304387940814617ULL;
signed char var_17 = (signed char)-121;
unsigned int var_18 = 1381660589U;
long long int var_19 = -8233328024687907730LL;
long long int var_20 = -1195031420544773234LL;
unsigned long long int var_21 = 3475980865594053547ULL;
unsigned int arr_6 [25] ;
int arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3280356374U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -899935602 : 1945212602;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
