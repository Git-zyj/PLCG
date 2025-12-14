/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 += (min((max((~var_15), (max(var_11, var_4)))), var_14));
                        var_17 = ((~(((((-1 ? 0 : 1)) <= ((max(92, 32767))))))));
                        var_18 = ((!((((((~var_3) + 2147483647)) << (var_15 - 55789))))));
                        arr_8 [i_0] [i_0] [i_0] [i_0] = 1048572;
                    }
                }
            }
        }
        var_19 = (min((-1 / 7861), (min(((var_10 ? var_11 : var_7)), var_6))));
        arr_9 [i_0] = 2762720279615524495;

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_12 [i_0] [i_0] = ((-(((((min(var_5, var_6))) || ((min(var_0, var_15))))))));
            arr_13 [0] &= ((~(((~var_0) ? var_3 : var_15))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_20 = (((min(var_15, var_10))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_23 [i_0] = (((min(((var_13 ? var_6 : var_14)), ((min(var_1, var_12))))) % (max((var_6 <= var_12), ((var_0 ? var_8 : var_14))))));
                            var_21 &= var_1;
                            arr_24 [i_0] [i_5] [i_6] [i_7] [i_8] [i_6] [i_0] = (min(var_0, (((!(var_3 <= var_7))))));
                        }
                    }
                }
                arr_25 [i_0] = (max(var_6, (~var_1)));
                var_22 = ((~(var_11 ^ var_7)));
                arr_26 [i_0] = ((((max((max(-797491892850788296, 18511)), -1))) ? var_9 : ((var_5 ? var_11 : (var_0 ^ var_12)))));
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_31 [i_0] [i_9] [i_5] [i_0] = min(((((min(var_15, var_6))) ? (~var_7) : (var_5 / var_10))), (((-(min(var_0, var_15))))));
                        var_23 = var_0;
                        var_24 = var_9;
                        var_25 = var_13;
                    }
                }
            }

            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                arr_34 [i_0] [i_5] [i_0] [i_11 - 1] = (!-var_3);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_26 = (min((((!var_7) ? var_0 : ((max(var_6, var_1))))), ((((!var_1) && (var_6 && var_3))))));
                            arr_40 [i_0] [i_12] [i_11] [i_5] [i_0] = ((((min((!var_9), (var_14 + var_4)))) ? (((~(var_7 | var_9)))) : (((var_13 | var_12) % ((var_4 ? var_10 : var_9))))));
                            var_27 ^= (var_15 <= -5059176467439756331);
                        }
                    }
                }
            }
        }
    }
    var_28 = (((~(~var_13))));
    #pragma endscop
}
