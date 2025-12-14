/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (14301 * var_13);
    var_21 = var_7;
    var_22 = ((var_16 ? 5838869943925469472 : ((((var_18 >> var_13) ? 65029 : ((63 ? 3027443606 : 2147483647)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 = (min(var_23, ((((((1 ? (arr_2 [i_0] [i_0]) : 18446744073709551615))) ? (~2147483676) : (arr_2 [i_0] [0]))))));
        var_24 = var_10;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_25 = (((((((max(6, 255))) ? (arr_2 [i_0] [i_1]) : (arr_4 [i_1] [i_1] [i_1])))) ? (((((((arr_1 [i_0] [i_1]) ^ 1))) ? (((arr_3 [i_1] [i_0]) - (arr_0 [2] [2]))) : (((((arr_4 [i_0] [i_0] [i_1]) != var_2))))))) : ((18040515357093502912 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))));
            var_26 = (max(var_26, (((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_0] [i_1])))));
            var_27 = (~-41);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_28 = (((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])));
        arr_10 [i_2] = ((!((((arr_7 [16] [16]) ? (arr_7 [i_2] [i_2]) : (arr_9 [i_2] [i_2]))))));
        arr_11 [i_2] = ((var_1 ? (arr_6 [i_2] [i_2]) : (arr_8 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_18 [i_4] = (arr_12 [i_4]);
            var_29 *= (((arr_13 [i_3]) ? (arr_13 [i_3]) : var_6));
            arr_19 [i_4] [i_3] [i_4] = (((((arr_7 [i_4] [i_3]) ? (arr_8 [i_3]) : (arr_17 [i_3] [i_4])))) ? 64 : (((!(arr_8 [i_3])))));
            arr_20 [i_4] = (arr_13 [i_3]);
        }
        for (int i_5 = 4; i_5 < 24;i_5 += 1)
        {
            arr_24 [i_3] = (arr_13 [i_3]);
            var_30 = (!var_12);
        }
        arr_25 [i_3] [i_3] = (((arr_6 [i_3] [5]) / (arr_6 [i_3] [i_3])));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_28 [10] [8] = 31550;

        /* vectorizable */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_31 = (arr_7 [i_7 + 1] [i_7 + 1]);
            var_32 = (max(var_32, (((993851816 ? (arr_15 [i_6] [i_7]) : -41)))));
            arr_31 [i_7] = (arr_9 [24] [i_7 + 1]);
            arr_32 [i_7] = 1;
        }
    }
    #pragma endscop
}
