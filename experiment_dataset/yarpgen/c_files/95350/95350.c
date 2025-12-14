/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 1]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (max(var_13, var_12));
                        var_17 = (min(var_17, ((((((~(((var_8 <= (arr_5 [i_0]))))))) + (max(18446744073709551603, 18446744073709551615)))))));
                        var_18 = (max(var_18, (((var_12 ? var_12 : ((~(~var_14))))))));
                    }
                }
            }
        }
        var_19 = var_1;
    }
    var_20 = (((((153 ? 167 : 103))) ? var_4 : (((max(var_5, var_10))))));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = (min(((((103 << (var_8 - 65))))), ((~(arr_9 [i_4])))));
        var_22 -= var_12;
        arr_11 [i_4] = (arr_10 [i_4]);
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_23 = (max(var_23, (arr_10 [i_5])));
        arr_16 [1] [1] = var_13;
        arr_17 [i_5] = var_5;
    }
    #pragma endscop
}
