/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 &= (((arr_1 [16]) % (arr_1 [i_0 + 1])));
        var_15 = 108;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 + 1]) ? var_0 : 9102));
        arr_4 [i_0] [i_0] = ((!var_2) ? var_8 : ((56417 ? (arr_0 [i_0]) : 9448138451910230955)));
        var_16 ^= ((-9223372036854775807 - 1) || (((6083364318300531469 ? (arr_2 [i_0 - 2]) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 += 118;
                    var_18 = (max(var_18, (((-(arr_11 [1] [i_3] [19] [i_3 - 2]))))));
                }
            }
        }
        arr_12 [5] [8] = ((-(arr_7 [i_1 - 1])));
        var_19 = 6083364318300531471;
        arr_13 [i_1] [0] = (arr_6 [i_1 + 1]);
    }

    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 = (((((arr_10 [i_5 - 3] [i_4 + 2] [i_4 - 1] [i_4]) + (arr_10 [i_5 + 3] [i_4 + 3] [i_4 + 2] [i_4 - 1]))) + ((var_1 ? (arr_10 [i_5 - 1] [i_4 + 3] [i_4 + 1] [1]) : (arr_10 [i_5 - 3] [i_4 + 2] [i_4 + 1] [i_4])))));
                    arr_21 [4] [i_4] = (((min(var_5, 41)) > (((~(arr_20 [i_4 - 1] [i_5 + 3] [i_6]))))));
                }
            }
        }
        var_21 -= ((!(arr_11 [i_4] [i_4] [i_4] [1])));
        arr_22 [i_4] = -7141;
        var_22 ^= (min((!6083364318300531486), (arr_11 [i_4 + 2] [i_4 - 1] [i_4 + 3] [i_4])));
        var_23 += ((!((max(((((arr_18 [i_4] [1]) > var_12))), (max(var_7, (arr_2 [i_4]))))))));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_31 [i_7] = ((56433 ? (arr_23 [i_7]) : (arr_6 [i_7 - 3])));
                    var_24 = (((arr_9 [i_7 - 4] [i_7 - 2]) ? (arr_9 [i_7 - 4] [i_7 - 2]) : 9102));
                }
            }
        }
        var_25 -= (arr_10 [i_7 - 1] [i_7 - 1] [i_7 - 4] [i_7]);
    }
    var_26 = -1;
    #pragma endscop
}
