#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4908065577818608900LL;
int var_5 = 611626506;
int var_6 = 644762348;
int var_7 = 24793146;
long long int var_9 = 1914988594389972806LL;
int var_11 = -781446072;
unsigned short var_12 = (unsigned short)49214;
unsigned short var_13 = (unsigned short)15463;
int zero = 0;
int var_14 = 1800453163;
long long int var_15 = -1006724794814370983LL;
int var_16 = -1264705387;
long long int var_17 = -3855782708180410782LL;
int var_18 = 1729915374;
int var_19 = 1192668586;
unsigned short var_20 = (unsigned short)15457;
int var_21 = 1433630700;
long long int var_22 = -7784859854402101434LL;
unsigned short var_23 = (unsigned short)26328;
int var_24 = -1132142183;
int var_25 = 1121971447;
long long int var_26 = -7787660890828932153LL;
unsigned short var_27 = (unsigned short)43591;
long long int var_28 = -652053193019712227LL;
int arr_0 [10] ;
unsigned short arr_2 [10] ;
long long int arr_3 [10] [10] [10] ;
long long int arr_6 [12] [12] ;
int arr_9 [20] [20] ;
int arr_10 [20] ;
int arr_11 [20] [20] ;
int arr_12 [20] [20] ;
int arr_8 [12] [12] ;
int arr_13 [20] ;
int arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 260155882;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)38714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5334900142773453818LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -6072598084967035645LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1584873768;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -1376210161;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -329691352 : -1184308536;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 1966005604 : 1086196993;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = -1529286698;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1864379755 : 1115667380;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 124747985 : 1713845567;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
