/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, (((+(((arr_1 [i_0]) << (((var_2 + 448309755) - 13)))))))));
        arr_2 [i_0] [i_0] = ((var_5 ? ((+(((arr_0 [i_0]) ? var_1 : 16)))) : (((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : 2040)))))));
    }
    var_12 = var_3;
    var_13 = ((((min(((var_1 ? 9 : 2040)), ((min(1, var_6)))))) ? ((max(1, var_0))) : (~32767)));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {
                var_14 *= (arr_6 [i_1] [i_1] [i_1]);
                arr_9 [i_2 + 3] [i_1] [i_1] = ((((-(arr_7 [i_1] [i_1])))) | 14147052175884836364);
                var_15 = var_0;
                var_16 = arr_8 [i_1 - 1] [i_2 + 3] [i_2 - 1];
                arr_10 [i_1] [i_1] = (!9);
            }
        }
    }
    var_17 = (-99 + ((var_4 ? (!var_6) : (1 && var_1))));
    #pragma endscop
}
