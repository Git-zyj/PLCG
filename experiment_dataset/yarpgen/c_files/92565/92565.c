/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? ((~(arr_2 [i_0]))) : (arr_2 [1])));
        var_12 = (min(var_12, (((2147483644 ? (var_9 - 121) : -var_1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 = ((((((0 ? 121 : 18446744073709551603)) ? (!-121) : ((((arr_2 [i_1]) != -466176170)))))));
        arr_6 [i_1] = (((-1 ? 121 : -3151303012106568556)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_14 = (arr_9 [i_2]);
        arr_11 [i_2] = (arr_7 [i_2]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_15 -= (max(var_11, (((var_6 >= (arr_13 [8]))))));
        var_16 = (min(((max((arr_12 [i_3]), var_9))), ((-(arr_12 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_19 [i_3] = ((((max((max(var_7, (arr_16 [i_3] [i_4] [i_4] [i_3]))), 127))) ? 14747 : (max((max((arr_13 [i_3]), -3151303012106568556)), var_10))));
                    var_17 = (min(var_17, (((((((-3151303012106568556 >= 1) ? ((((arr_12 [12]) * var_4))) : (min(3151303012106568555, (arr_15 [i_4])))))) ? ((var_5 ^ (arr_16 [i_4] [i_4] [i_4 + 1] [i_5]))) : (~-466176170))))));
                }
            }
        }
        var_18 += (((((max(24, 0))))) ? (((max(255, 1)))) : ((((max(32767, -122))) ? var_11 : var_10)));
    }
    var_19 = ((((max(var_11, var_5))) ? ((((127 ? 4194303 : -39)) / 31081)) : (1 / var_8)));
    var_20 = var_11;
    #pragma endscop
}
