/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (!var_4);
                var_21 = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (((((arr_5 [i_1 + 1] [i_1] [i_1]) != (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) : var_0));
                var_22 = (max(var_22, -14707));
                var_23 = (((((-8 ? 18446744073709551608 : 18446744073709551608))) ? (((arr_1 [i_1 - 1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 + 1]) : 249)) : (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_24 = (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                    var_25 = ((var_2 ? -8 : (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                    var_26 = (((((arr_8 [i_1] [i_1 + 1] [i_1] [i_0]) ? (((arr_0 [i_2]) ? var_8 : (arr_9 [i_1] [i_0] [i_0]))) : ((((arr_0 [i_2]) + var_13)))))) ? 240 : (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]));
                    arr_10 [i_2] [i_2] [i_1] = (((((var_5 ? (((arr_9 [i_1] [i_1] [i_2]) ? var_5 : var_14)) : (arr_9 [i_1] [i_1 - 1] [i_1 + 1])))) ? ((-(arr_2 [i_1] [i_1]))) : (arr_9 [i_1] [i_1 - 1] [i_1 - 1])));
                    arr_11 [i_1] [12] [i_2] = (!18446744073709551615);
                }
            }
        }
    }
    var_27 = var_5;
    var_28 = 410391523;
    #pragma endscop
}
