/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((-6066956436776060348 > 9223372036854775790) ? -6066956436776060360 : (min(-51, (min(-6066956436776060370, var_14))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = var_15;
                        arr_9 [i_3] [9] = (((((arr_8 [i_0] [i_1] [i_1 - 1] [1]) ? (arr_8 [i_0] [i_3] [i_1 - 1] [i_3]) : (arr_8 [i_3] [i_2] [i_1 - 1] [i_3])))) ? ((((((arr_4 [1]) ? -1600837558 : 0))) ? (arr_1 [i_1 - 1]) : ((0 ? 651793735794840847 : 651793735794840853)))) : var_7);
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_21 += (~144);
                        var_22 = ((!((min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2]))))));
                        arr_13 [i_0] [i_0] [i_2] [i_4 - 2] = ((((((arr_12 [i_2] [i_0]) == (arr_12 [i_4 + 1] [i_0])))) ^ (((!((((arr_4 [i_1]) ? var_15 : (arr_3 [i_4])))))))));
                    }
                    var_23 = (min((((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]) : 6066956436776060345)), (~var_17)));
                    arr_14 [i_0] [i_0] [i_0] = var_12;
                }
            }
        }
    }
    var_24 += (((((((max(var_2, var_3))) && 8678249104148494330))) | var_0));
    #pragma endscop
}
