/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 && (var_4 * var_2)))) <= ((((var_2 * 15) <= (var_10 - var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = var_9;
                arr_6 [i_1] [i_1] [i_1 + 1] = var_5;

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_13 = (((((var_9 && var_4) << (var_1 - 123764942))) <= var_1));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_1] = var_10;
                        var_14 = var_9;
                        var_15 += var_5;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = (((var_9 - var_0) || var_8));
                        var_17 = var_2;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = var_2;
                        var_19 = ((var_4 ^ ((var_9 >> (var_10 - 7441773322370609432)))));
                        var_20 = (max(var_20, var_3));
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_22 [i_1] [i_1] [1] = (((var_2 != var_0) >> ((((240 << (var_2 - 95))) & var_9))));
                        var_21 |= ((var_5 + 2147483647) >> (var_3 - 2446871050));
                        var_22 = (max(var_22, var_10));
                        var_23 = var_10;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_24 = var_0;
                        var_25 &= var_0;
                        var_26 |= var_7;
                        var_27 += (var_7 == var_4);
                        var_28 = (min(var_28, var_2));
                    }
                }
            }
        }
    }
    var_29 = var_4;
    var_30 |= ((((8773557434761870163 * (241 && var_4)))) && ((((var_3 * var_9) / var_9))));
    #pragma endscop
}
