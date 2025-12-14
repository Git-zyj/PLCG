/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_6;
    var_11 = ((((64 * (min(var_5, 0)))) | (max(var_9, ((var_2 ? var_0 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_0] &= 20927;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_1] = -var_8;
                    arr_10 [i_1] = ((var_4 || ((20927 && (!var_9)))));
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((((max(34598, (!20907)))) ? 27 : var_0));
                    arr_12 [i_1] [i_1] [i_1] = ((var_0 / (max((var_2 * 9223372036854775807), (33 && var_9)))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [5] [i_0] = 2147483647;
                    arr_16 [i_1] = (max(33, (((var_4 ? 99 : 17824049896153657172)))));
                    var_12 = ((!var_8) ? (var_4 || var_8) : var_9);
                    var_13 = (max((!27), ((32767 ? 77 : 1))));
                    var_14 = var_0;
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_15 = (!-1);
                    arr_20 [i_1] [i_1] [i_1] = (min(var_6, ((min(33554432, 27)))));
                    var_16 &= ((min(892, 20913)));
                }
                arr_21 [i_0] [i_0] [i_0] |= (((((-((min(var_8, var_9)))))) || var_4));
                var_17 = var_9;
                arr_22 [i_1] = ((622694177555894444 ? -1 : -893));
            }
        }
    }
    var_18 = (max(var_18, (max(var_8, var_3))));
    var_19 = (max(var_19, var_8));
    #pragma endscop
}
