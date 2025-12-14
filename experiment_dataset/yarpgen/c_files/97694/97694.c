/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = ((var_9 && (((7772 ? (arr_2 [i_0] [i_0 + 1]) : 65522)))));
        var_13 &= (arr_3 [i_0 + 1]);
        var_14 = (min(((min((arr_1 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) ^ 33467))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_15 = 485449359;
        var_16 = (min(var_16, ((((((580773758 ? var_4 : var_10) << (((((arr_5 [8]) + 20618)) - 6)))))))));
        var_17 += 139;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (min(((((((arr_1 [i_2]) + 2147483647)) << (((((arr_0 [i_2]) ? 65518 : (arr_10 [i_2] [i_2]))) - 65518))))), (((((var_10 ? (arr_5 [i_2]) : 7788))) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : var_4))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] = ((((((min((arr_14 [i_2] [i_3] [i_4 - 1]), (arr_9 [i_5])))) || ((min((arr_1 [i_3]), var_9))))) ? (min((arr_16 [i_4 - 2] [9] [i_4 - 3] [i_5 - 2]), -44918)) : ((min(-24165, (arr_12 [i_5] [i_3] [i_3]))))));
                        arr_20 [i_3] = (min(12322259727677409284, var_9));
                        arr_21 [i_2] [i_3] [i_4 - 2] [i_5] [i_3] = ((min((arr_0 [i_5 - 1]), (arr_5 [i_3]))));
                    }
                }
            }
        }
        var_18 -= (min((arr_15 [i_2] [i_2] [i_2] [i_2]), (arr_3 [5])));
        var_19 = (-113 % 1);
    }
    #pragma endscop
}
