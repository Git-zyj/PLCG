/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (((((min(1, (-2147483647 - 1))))) ? var_3 : (!var_9)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 += var_12;
        var_23 = (min(var_23, (((!(arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_24 ^= (min(var_8, var_1));
            arr_6 [3] [i_1] = (max(var_5, -5983470537377661477));
            var_25 -= (arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [3] [i_0] = var_16;
            var_26 = (max(var_26, var_8));
            arr_10 [i_0] = var_2;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_27 *= (((var_10 ? var_7 : (arr_11 [i_5 - 2]))));
                        arr_20 [i_0] [i_5] = ((!(((((((arr_18 [i_3] [i_5]) ? var_3 : var_10))) ? ((var_2 ? var_1 : -386941143)) : (!var_17))))));
                    }
                }
            }
            arr_21 [i_3] = ((var_14 != ((((min(-5085, 273805348))) ? var_8 : (arr_14 [i_0] [i_3] [i_0] [i_3])))));
            var_28 = (min(var_28, (((max(var_0, var_17))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] [i_6] = (((arr_25 [5] [i_6] [i_6]) ? var_1 : (arr_15 [i_0] [i_0] [i_0] [i_0])));
            arr_27 [i_6] [i_6] [i_0] = ((((var_19 ? (arr_14 [i_0] [i_6] [i_6] [4]) : var_18)) * 1));
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_29 ^= ((((1 ? (max(3748986905936966111, 411077872)) : -3198809560299582178)) + (((arr_29 [i_7]) ? (((411077868 ? (arr_28 [i_7]) : (arr_29 [7])))) : -6294799386071500174))));
        arr_30 [i_7] = var_6;
        arr_31 [i_7] = ((var_9 ? (min((arr_29 [i_7]), (arr_28 [i_7]))) : var_0));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_30 ^= (+-3198809560299582178);
        arr_35 [i_8] = (min((((arr_33 [i_8] [i_8]) ? var_4 : (arr_33 [i_8] [i_8]))), (((!(arr_33 [i_8] [i_8]))))));
        var_31 = (arr_34 [i_8]);
        var_32 = (max(var_32, (min((arr_29 [i_8]), 1))));
    }
    var_33 ^= var_0;
    var_34 *= ((~((((max(var_5, var_18))) ? (var_5 + var_0) : (~var_14)))));
    #pragma endscop
}
