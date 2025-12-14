/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((var_1 - var_11) ? ((-1 ? ((min((arr_2 [i_2]), (arr_8 [i_0] [i_1] [i_2])))) : var_0)) : ((var_13 + (((arr_6 [i_1]) * var_1)))))))));
                    arr_9 [i_0] [i_0] [i_2] = (+-23660);
                    var_19 = ((-((((min(var_10, (arr_6 [i_0])))) ? var_11 : var_5))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (var_2 == var_7);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] = (arr_2 [i_3]);
                            arr_17 [i_0] [i_3] [i_1] [i_1] [i_0] = var_0;
                            var_21 += var_12;
                        }
                    }

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_5] [i_2] = -9223372036854775803;
                        var_22 += ((51 * (arr_4 [i_0] [i_0] [i_5])));
                        arr_22 [i_0] [i_1] [i_5] [i_5 + 2] &= -15;
                        var_23 = (min(((3237390966 * (arr_5 [i_0] [i_1] [i_2]))), (((((-40579638 ? var_15 : var_12))) ? (arr_2 [i_5]) : var_17))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (((((-((36 ? var_17 : var_2))))) ? var_9 : 521768783));
                        var_25 = (((var_16 / var_16) + (arr_7 [i_0] [i_0] [i_0])));
                        var_26 *= (arr_7 [i_0] [i_2] [i_2]);
                    }
                }
            }
        }
    }
    var_27 = var_14;
    #pragma endscop
}
