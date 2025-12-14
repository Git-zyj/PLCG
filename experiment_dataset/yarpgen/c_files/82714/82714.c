/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = ((((((max((arr_9 [i_0 + 2] [i_0]), 1326630097))) * ((18446744073709551615 ? (arr_0 [i_0]) : var_14)))) > (((((!1678317122) <= (((arr_4 [i_0] [i_0] [i_0 + 3] [i_0]) ? (arr_6 [1] [1]) : (arr_3 [i_1 - 1] [i_0] [i_4])))))))));
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_4] [i_4] [i_2] = (min((arr_7 [i_0] [i_0] [i_0] [i_0]), 0));
                            }
                        }
                    }
                    var_17 = ((~(((arr_1 [i_0 + 2] [i_0]) ? (arr_1 [i_0 + 1] [i_0]) : 1))));
                }
            }
        }
    }
    var_18 = ((((var_2 ? 1 : 1))));
    var_19 = ((((var_13 ? (!var_13) : ((min(1, 6))))) + (max(((-1265146389392406651 ? var_10 : var_3)), (16264520058586675202 >= 1)))));
    #pragma endscop
}
