/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_1;
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min((((!(arr_2 [i_1 - 4] [i_1 - 2])))), (((arr_2 [i_1 - 2] [i_1 + 1]) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 - 3] [i_1 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((~(((arr_5 [i_1] [i_1 - 1] [i_2]) ? (arr_5 [17] [i_1 - 4] [9]) : (arr_5 [i_0] [i_1 - 3] [i_0])))));
                            var_18 = (min(1079769480, 222));
                            arr_9 [i_3] = (arr_4 [13] [13] [i_2] [i_2]);
                            var_19 = (arr_4 [i_3 - 2] [i_1 - 1] [i_2] [1]);
                        }
                    }
                }
                var_20 = ((~(((arr_4 [i_1 - 3] [i_1 - 4] [i_1 - 2] [13]) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
