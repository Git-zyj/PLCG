/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_0] [i_0]) ? -732386416 : (((arr_2 [i_0 - 1] [i_0]) & var_8))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = ((137434759168 * (var_7 * var_11)));
                    arr_8 [i_0] [i_0] = (((1 & var_12) ? -732386400 : (arr_5 [i_0])));
                    var_18 = (((-732386422 ? (arr_4 [i_0] [i_0] [i_0]) : -871270476)));
                    var_19 += 8;
                }
                var_20 = max((min(2, (min(137434759168, var_14)))), (max(var_0, (max((arr_0 [i_0] [i_1]), -137434759168)))));
                arr_9 [i_0] [i_0] = (max(-0, (((arr_2 [i_0] [i_0]) ? var_15 : ((var_9 ? (arr_1 [i_0] [i_0]) : 672390016))))));
                var_21 = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_22 = var_12;

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = (((732386416 ? var_9 : (arr_3 [i_3] [i_3]))));
        var_24 = (min(var_24, ((((arr_7 [i_3]) && (((((max(0, -137434759168))) ? var_0 : var_9))))))));
        var_25 = (arr_0 [i_3] [i_3]);
    }
    var_26 = (max(var_9, -var_2));
    #pragma endscop
}
