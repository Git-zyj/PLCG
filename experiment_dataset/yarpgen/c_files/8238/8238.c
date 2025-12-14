/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : var_0)) : (arr_2 [i_0])))) ? (arr_1 [i_0] [i_0]) : -52));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((((max((arr_8 [i_0] [i_0] [i_2]), -51))) ? 127 : -32)) >= 127));
                    var_11 = (min(var_11, -127));
                }
            }
        }
        var_12 += ((((min((arr_5 [i_0] [i_0] [4]), (min((-127 - 1), var_0))))) ? (~28) : ((~((((-127 - 1) <= 127)))))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_13 = (max((((arr_10 [i_3 - 2] [i_3 + 1]) / var_8)), (arr_10 [i_3 - 1] [i_3 + 1])));
        var_14 += 112;
        var_15 = (max(var_15, (((~(min((((arr_5 [i_3] [i_3 + 2] [i_3]) ? (arr_0 [i_3] [i_3]) : -98)), (var_10 & var_6))))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_16 = arr_1 [i_4] [i_4];
        var_17 = arr_13 [i_4];
        var_18 = (min(var_18, var_3));
        var_19 = var_6;
        var_20 = arr_5 [i_4] [i_4] [i_4];
    }
    var_21 = (((~var_0) != var_0));
    var_22 = ((((~((max(var_4, var_5))))) - (~123)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            {
                var_23 &= 127;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((~(arr_5 [i_5] [i_8 + 2] [i_7]))))));
                                arr_26 [i_5] [i_8] [i_7] [i_5] = ((127 ? (((arr_25 [i_9 - 1] [i_5] [i_6 - 1]) ? (arr_25 [i_9 - 1] [i_5] [i_6 + 1]) : (arr_25 [i_9 - 1] [i_5] [i_6 - 2]))) : -28));
                                var_25 += ((~(((-127 - 1) ? (((arr_18 [i_5] [i_7]) ? (arr_5 [i_6 + 1] [i_7] [i_7]) : 122)) : 33))));
                                var_26 = ((~(min(((-45 ? (-127 - 1) : -47)), (arr_2 [i_5])))));
                            }
                        }
                    }
                }
                arr_27 [i_5] [i_5] [i_5] = (min((((arr_24 [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1]) ? (arr_24 [i_6 + 1] [i_5] [i_6] [i_6 + 1] [i_5] [i_6]) : (arr_24 [i_6 - 2] [i_5] [i_6 - 2] [i_6 - 2] [i_5] [i_5]))), (~-89)));
            }
        }
    }
    #pragma endscop
}
