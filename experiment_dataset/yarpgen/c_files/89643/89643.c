/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? ((((!(((var_4 ? var_6 : var_5))))))) : var_12));
    var_14 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = -1;
                var_15 = (min((((arr_1 [i_0]) ? (arr_1 [i_1]) : var_3)), ((((var_1 || var_4) ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0]))))));
                var_16 = ((-526099457 ? (arr_0 [6] [i_1]) : ((((!(((var_3 ? var_0 : 0)))))))));
                var_17 = max(var_7, (arr_4 [i_1] [i_0] [i_0]));
            }
        }
    }
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_19 = (((min((~1), ((((arr_8 [i_2]) != 0))))) ^ ((((0 + var_4) > ((((arr_7 [i_2] [i_2]) ? var_0 : (arr_0 [i_3] [i_2])))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5] [7] = (((arr_11 [i_5] [i_4] [6]) >= (arr_1 [i_6 + 1])));
                                var_20 = ((1 ? ((max(var_8, (var_1 >= var_3)))) : var_3));
                                var_21 = ((1 ? 4064766736 : 18428729675200069632));
                                var_22 = var_0;
                                var_23 = (((arr_18 [i_4] [i_6 - 1] [i_6] [i_6 - 2] [i_6] [i_6 - 2]) << (((min((arr_18 [i_6] [i_6 - 2] [i_6 - 1] [i_6] [i_6] [i_6]), var_7)) - 21811))));
                            }
                        }
                    }
                }
                var_24 = (((((~(arr_0 [i_2] [i_3])))) ? ((~(max((arr_11 [i_3] [i_2] [i_2]), var_10)))) : var_11));
            }
        }
    }
    #pragma endscop
}
