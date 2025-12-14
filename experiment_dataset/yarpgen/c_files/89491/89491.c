/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 13;
    var_16 = (~208);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 += (((var_12 * (((arr_0 [i_0]) ? var_7 : (arr_0 [i_0]))))));
        var_18 += ((((arr_2 [i_0]) ? -30101 : var_13)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [1] = var_4;
        var_19 = ((((~11) ? var_3 : (var_4 || var_5))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [6] = (min(((min((arr_8 [i_2]), (var_8 || var_10)))), ((((arr_8 [i_2]) ? var_9 : 13)))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_20 ^= (min(((((arr_7 [i_2]) ? (arr_7 [i_3]) : var_0))), (arr_9 [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = ((((var_3 == 19358) ? (!57550) : (max(var_10, 10)))));
                        arr_18 [4] [7] [i_3] [7] [i_3] [i_5] &= (min((((arr_9 [i_2]) ? (((arr_16 [i_2] [i_5] [22] [i_5]) ? var_10 : 11603148285440102661)) : (!var_5))), ((min((((arr_14 [i_3] [i_5]) ^ var_0)), (arr_16 [i_2] [i_2] [i_2] [i_2]))))));
                    }
                }
            }
            var_22 = (max(var_22, (((!(!46175))))));
        }
    }
    #pragma endscop
}
