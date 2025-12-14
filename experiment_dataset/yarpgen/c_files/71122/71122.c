/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((((15418724967450962205 / (arr_5 [i_0] [i_1] [i_1])))) ? (((((var_14 / (arr_0 [3]))) / -60055))) : (max(var_1, -var_10)))))));
                var_20 = (min(var_20, var_15));
                var_21 *= var_2;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_22 = (max(var_22, ((((((min((var_13 ^ 14859), var_4)) + 2147483647)) << (var_15 - 29916))))));
                        var_23 *= var_2;
                        arr_11 [i_0] |= ((max((arr_1 [i_1] [i_1]), var_9)));
                    }
                    var_24 *= (((((~(arr_3 [i_1])))) ? ((((arr_3 [i_0]) % var_9))) : (((arr_10 [10] [i_1] [10] [i_1] [i_1]) ? 576460752303423487 : (var_15 / var_12)))));
                }
                var_25 += min(var_9, ((((20940 ? (arr_10 [i_1] [i_1] [1] [i_0] [i_0]) : var_12)) % (((~(arr_5 [i_0] [i_1] [i_0])))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 = (max(var_26, ((min((((~var_0) ? (~var_15) : var_6)), ((var_17 ? ((var_5 ? var_0 : var_1)) : (((((arr_12 [i_4]) == var_5)))))))))));
        var_27 *= ((max((max(var_2, var_6)), var_4)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    {
                        var_28 = (min(var_28, (((var_4 == (~var_14))))));
                        var_29 *= var_6;
                    }
                }
            }
        }
        var_30 &= ((((min(var_12, var_0))) ? (((~(arr_21 [i_5] [i_5] [i_5] [i_5])))) : (arr_25 [i_5] [i_5] [i_5])));
        var_31 -= ((((((arr_14 [i_5] [i_5]) - var_14))) >= ((((max(var_12, var_1))) ^ (max(-203699387, var_6))))));
    }
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_32 = (max(var_32, var_6));
                    var_33 |= var_17;
                    var_34 -= (((((arr_18 [i_10 + 1] [i_9 - 2] [i_11]) ? var_6 : var_13)) >> ((((~(~var_6))) - 8567331003540112040))));
                }
            }
        }
        var_35 = (min(var_35, (((((0 ? 0 : -5753778888200850960)))))));
        var_36 += var_6;
    }
    #pragma endscop
}
