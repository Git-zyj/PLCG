/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 -= ((((((65535 <= 2147483647) == ((1 ? 1 : 16))))) >> ((255 ? var_14 : 3914961354))));
        arr_3 [i_0] [i_0] = ((var_12 >> (5524 - 5486)));
        arr_4 [i_0] = ((3914961371 ? ((1 ? (arr_2 [i_0] [8]) : (arr_0 [i_0]))) : (((arr_2 [4] [i_0]) ? (arr_1 [i_0]) : 1679694232))));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (((((arr_6 [i_1]) ? var_13 : (arr_5 [i_1]))) + (((((arr_6 [i_1]) >= 65529))))));
        arr_9 [i_1] [17] = ((3946 ? (arr_6 [i_1]) : (((arr_5 [i_1]) ? 65534 : 125))));
        var_18 = (min(var_18, ((((arr_6 [12]) == (arr_6 [18]))))));
        var_19 = ((0 == (arr_6 [i_1])));
        arr_10 [i_1] = (arr_7 [i_1] [i_1 - 1]);
    }
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        var_20 -= 0;
        arr_14 [i_2] [i_2] = arr_11 [i_2];

        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_17 [i_2] = (((arr_16 [i_2]) ? (((arr_13 [i_2]) & 10031)) : (((((-127 - 1) + 2147483647)) >> (((arr_12 [i_2] [i_2]) / var_2))))));
            arr_18 [i_2] [i_3] = ((1620439071 ? (((((arr_13 [i_3]) >= var_11)) ? (((((arr_13 [i_2]) <= 18446744073709551360)))) : ((7 ? 1152780767118491648 : 1620439071)))) : 32754));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] = ((arr_20 [i_2 + 2]) >= ((5549 >> (5553 - 5528))));
            var_21 = (arr_11 [i_2]);
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_22 = ((((((min(1858937796, 0)) >> (1620439071 - 1620439063)))) && ((min((arr_20 [i_2 - 4]), (var_6 != -1858937797))))));
            arr_24 [i_2] = (min((min((max(-2117734197, (arr_20 [i_5]))), ((0 ? 1 : (arr_15 [i_2 - 1] [i_2] [i_2]))))), var_7));
            var_23 -= var_13;
        }
        var_24 = (max(var_24, (((((max(-16501, 25718))) ? 2147483625 : (((-16446175 | var_14) ? 0 : ((-(arr_23 [i_2]))))))))));
    }
    var_25 = 19;
    #pragma endscop
}
