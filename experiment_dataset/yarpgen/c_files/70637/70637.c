/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_12));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [7] [7] [i_2] [i_0] [i_3] [7] = (-((5659470079267776497 ? -22 : -15)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_9 [i_0])));
                            var_20 = (max(var_20, ((((0 >> 23) & var_15)))));
                            var_21 = (((0 ? 917056871 : (arr_12 [i_0] [i_3] [i_2] [i_1] [i_0]))));
                        }
                        var_22 = ((var_11 || (-32767 - 1)));
                    }
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2] = (max(616346481048649214, -861275708));
                        var_23 = (max(var_23, (+-1)));
                        var_24 = (arr_18 [i_0] [i_0] [i_0]);
                    }
                    var_25 = (23 << ((((~(((arr_17 [i_0] [i_0]) ? 245 : (arr_14 [i_2]))))) - 18446744073709551344)));
                }
            }
        }
    }
    var_26 = var_10;
    #pragma endscop
}
