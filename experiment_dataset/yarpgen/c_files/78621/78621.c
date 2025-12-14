/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, ((min((arr_0 [i_0]), -24162)))));
        var_13 = (max(var_13, (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 += 123;
        arr_7 [i_1 + 1] = 24155;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = (((arr_1 [i_2]) ? ((min((arr_2 [i_2 + 2]), (arr_2 [i_2 + 1])))) : (((arr_11 [i_2] [i_2]) ? (arr_4 [i_2 + 2]) : ((24178 ? (arr_9 [i_3] [i_2]) : var_11))))));
            var_15 = (min(var_8, (!var_0)));
            var_16 ^= ((((((((9475 ? (arr_9 [i_2 + 2] [i_2]) : 226))) ? ((78 ? -48 : (arr_5 [i_2 + 1]))) : var_11))) ? (((((arr_2 [i_3 + 1]) ? -98 : (arr_6 [0]))) + 162)) : (arr_6 [i_3])));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                var_17 += (((var_5 != 8014482378863077628) || (arr_3 [i_2])));
                arr_18 [i_2 + 1] [4] |= ((var_1 ? var_7 : var_10));
            }
        }
        arr_19 [i_2] = (min(((((((arr_8 [i_2 + 2]) ? var_3 : var_9))) ? var_11 : (((17433 ? (arr_0 [i_2]) : var_0))))), (((arr_2 [i_2]) ? ((min(-24155, 2130150992))) : ((101 ? 2130150996 : var_3))))));
        var_18 += (arr_6 [i_2]);
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5 + 2] = (-28664 * 66);
        arr_23 [i_5] [i_5] = (min(((((((var_7 ? (arr_10 [i_5 - 1]) : (arr_21 [i_5 + 2] [i_5])))) ? var_3 : (((var_0 + (arr_0 [i_5 + 1]))))))), ((var_7 ? (arr_1 [i_5 + 2]) : ((var_4 ? 15726066350734038845 : (arr_10 [i_5 + 2])))))));
        arr_24 [i_5] = ((+(((((arr_1 [i_5]) != var_7))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_19 = ((((-2849742594 ? (((arr_26 [i_6]) ? -7098221498633604482 : 8394)) : 70))) ? ((((~0) / var_5))) : (((arr_21 [i_8 + 1] [i_8 - 2]) ? (arr_16 [i_8 - 2] [i_8 - 2] [i_8 + 1]) : var_5)));
                    arr_34 [i_7] [i_7] [i_7] [i_8 - 2] = (min(((((((arr_26 [i_6]) != var_11))) & (!var_3))), (min(var_2, ((min((arr_29 [i_6] [i_6] [i_6]), var_2)))))));
                    arr_35 [i_6] [i_6] = ((arr_16 [i_8] [i_8 + 1] [i_8 + 1]) ? (min((arr_33 [i_8] [i_8 + 1] [i_8] [i_8 + 1]), (arr_16 [i_8] [i_8 + 1] [i_8]))) : (((arr_16 [i_8] [i_8 + 1] [i_8 + 1]) ? (arr_16 [i_8] [i_8 + 1] [i_8 + 1]) : (arr_16 [i_8] [i_8 + 1] [i_8 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
