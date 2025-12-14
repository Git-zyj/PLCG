/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_2] [i_3] [i_1] = (((((max(2147483647, (arr_11 [i_1] [i_2])))) | ((0 ? (-2147483647 - 1) : 2399304723705329756)))));
                            var_19 = (max(var_17, (((((max((arr_1 [i_0]), (arr_3 [i_3 - 1] [i_2])))) ? (arr_11 [i_1] [i_1]) : (!6241533490201656706))))));
                            arr_13 [i_3] [i_3] [i_3] [i_2] [i_3] [i_0 + 1] = ((((((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_0 + 1])))) ? 10911604047965257904 : (arr_4 [i_1])));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_0] = (!-6241533490201656699);
                arr_15 [17] = (1327214677734178164 ? 1 : (max((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [16]), (max(1, var_5)))));
                var_20 = ((((((2147483647 + (-2147483647 - 1))))) + (arr_3 [i_0 + 1] [i_0 + 1])));
            }
        }
    }
    var_21 = 2047;
    #pragma endscop
}
