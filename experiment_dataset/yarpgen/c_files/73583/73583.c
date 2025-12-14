/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((-((((131071 ? var_11 : var_8)) * var_11)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= ((((min((min((arr_1 [i_0]), var_9)), var_7))) ? (min(((max((arr_0 [i_0]), 7807))), ((21013 ? (arr_0 [i_0]) : -87)))) : (arr_2 [i_0] [i_0])));
        var_16 = (min(var_16, (((-((21007 ? 10140721921542322527 : (((((arr_1 [i_0]) && var_4)))))))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_17 -= -21015;
        var_18 = (min(var_18, ((((arr_5 [i_1] [i_1]) || (arr_5 [i_1 + 1] [i_1]))))));
        arr_7 [i_1] = 17;
        arr_8 [i_1] = (max((arr_3 [i_1]), (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : ((var_5 ? (arr_5 [7] [7]) : (arr_3 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_19 = var_3;
                        var_20 = (arr_9 [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
