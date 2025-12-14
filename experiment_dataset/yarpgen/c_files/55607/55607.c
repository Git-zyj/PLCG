/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [0] [i_2] [i_1] [i_0 - 3] [14] = ((((((arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 3]) ? ((max(var_1, var_5))) : (((arr_8 [17] [i_1] [14]) % 2808589974))))) ? (arr_0 [1] [i_1]) : (((!(arr_1 [i_0] [1]))))));
                            var_13 = 2808589991;
                        }
                    }
                }
                var_14 = ((((!var_4) && ((((arr_7 [i_0] [i_0] [i_0]) ? var_6 : var_1))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 = (max((((((arr_16 [i_4]) + 2147483647)) << (((((min(var_3, var_6)) + 1702064290)) - 9)))), (arr_22 [i_0] [i_0] [i_0] [i_4] [i_5] [10])));
                                arr_23 [i_6] [1] [i_0] [i_0] [i_4] [i_6] = (arr_18 [i_0 - 3] [16] [16] [i_4]);
                                arr_24 [i_4] = (max((max(var_3, var_3)), (((arr_17 [9] [i_0] [5] [i_4] [i_1] [i_0]) ? (arr_2 [i_0 - 2]) : (arr_18 [1] [i_1] [i_4] [i_4])))));
                                arr_25 [i_4] = (min(((var_2 ? 0 : -1652547373)), -1));
                                var_16 = (!var_5);
                            }
                        }
                    }
                }
                var_17 = ((+(((14830848073124158926 & 14830848073124158951) + (-1 & var_10)))));
            }
        }
    }
    #pragma endscop
}
