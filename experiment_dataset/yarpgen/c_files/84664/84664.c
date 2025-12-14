/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((~((((var_1 || (arr_0 [i_0]))) ? (arr_1 [i_0]) : ((var_12 ? var_9 : 1))))));
        arr_2 [i_0] = (!var_5);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_5 [i_1] [i_1]);
        var_18 = (var_13 <= -3901272387325208618);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_19 = (min((min(12, (var_7 && 153))), (!var_0)));
        var_20 = ((((-(min(-4485117692682073375, 1))))) ? (((var_5 || (arr_0 [i_2])))) : 153);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] = (min(1, ((194 ? -7370 : 1))));
                    var_21 *= var_14;
                    arr_15 [i_2] [i_2] [i_2] = (~(~63));
                }
            }
        }
        var_22 -= (((((arr_13 [0] [i_2] [0] [i_2]) <= var_1)) && (var_12 / var_9)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_23 = (102 + 57180);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    arr_26 [i_5] [i_5] [i_6] [i_6] = 4953;
                    var_24 = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_25 = var_12;
                                var_26 = -2218676406198699078;
                                arr_31 [i_8] [i_5] [1] [i_8] [i_5] = (!14252199670168852391);
                                var_27 = 153;
                            }
                        }
                    }
                    var_28 ^= ((!(~141)));
                }
            }
        }
    }
    var_29 = (min(var_29, var_12));
    #pragma endscop
}
