/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? 2395561971980946840 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((min(25678, 1))) ? ((~(((arr_1 [4] [4]) ? -8198087388619000791 : (arr_2 [i_0]))))) : (~1409563878)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((-8198087388619000795 ? var_0 : (((!(~0))))));
                                arr_13 [i_0] [i_0] [i_0] = (arr_6 [i_0] [0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (127 ? -26497 : 8198087388619000790);
                                var_23 = (((((max(var_15, (arr_18 [i_6])))) ? ((126 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_5] [i_5]))) : (arr_4 [i_5]))));
                                var_24 = (((((((((arr_5 [i_0] [i_0] [i_7]) ? -125 : 14))) ? 11943727529965368414 : ((26771 ? 7822847943044670297 : 126564063))))) ? (3015114713574620072 >= -2418412271605196881) : 1002049372868397314));
                                var_25 = (~1);
                            }
                        }
                    }
                }
                var_26 = (!30863);
            }
        }
    }
    #pragma endscop
}
