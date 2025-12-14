/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_1 [i_0] [0])));
                var_20 = ((((!(var_5 > 13))) ? 7 : ((-((96 ? (arr_0 [i_0] [i_0]) : 65524))))));
                var_21 *= -9521495305601614629;
                arr_6 [i_1] [8] = (max(((((arr_0 [i_0] [i_1]) * (arr_0 [i_0] [i_0])))), ((65516 ? 2067536746 : -97))));
                var_22 = -102;
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] = ((+(max((((arr_0 [i_2] [i_2]) ? (arr_2 [i_2]) : (arr_4 [i_2] [i_2] [i_2]))), (arr_8 [i_2])))));
        var_23 += (((((~(arr_1 [i_2] [i_2])))) ? ((((((arr_1 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])))))) : ((+(min((arr_0 [i_2] [i_2]), var_1))))));
        var_24 = (max((~65501), (max(((-(arr_7 [5] [i_2]))), -1476427149))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((arr_11 [i_3]) ? 65493 : var_7);

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_3] [i_4] [i_3] = (arr_10 [3]);
            arr_17 [i_3] = (((arr_14 [i_3]) & (~var_1)));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_5] [i_3] [i_5] = (arr_15 [i_3]);
            arr_22 [i_3] [i_5] [2] = ((1 + (arr_18 [i_5] [i_5])));
            var_25 = ((((((arr_14 [i_5]) ? (arr_20 [i_3] [i_3] [i_5]) : 1476427143))) ? 1476427133 : (arr_15 [i_3])));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_26 [i_6] [i_6] = 1476427140;
            var_26 = (((arr_18 [i_3] [i_3]) ? -1476427153 : (arr_19 [i_3] [i_3])));
            var_27 = (!122);
        }
        var_28 = (arr_20 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] = (arr_23 [i_7] [i_7]);
        arr_32 [i_7] = (((((arr_24 [i_7] [15]) ? (arr_18 [i_7] [i_7]) : 3035)) - var_15));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_29 = (arr_34 [i_8]);
        var_30 = var_18;
        var_31 = (!47118);
        var_32 = arr_33 [i_8];
    }
    var_33 -= (((((-1476427152 ? var_12 : 65517))) + var_16));
    var_34 ^= ((var_6 == ((var_10 ? var_6 : (~var_7)))));
    var_35 = (max(var_35, var_0));
    #pragma endscop
}
