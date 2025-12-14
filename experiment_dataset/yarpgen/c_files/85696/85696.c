/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (15202947410132914438 != -89785630);
                            arr_14 [i_1] [i_1] [i_0] [i_0] = (min((((!(arr_7 [i_1] [i_1 - 3])))), (min((arr_4 [i_1] [i_1 - 1]), (arr_7 [i_1] [i_1 - 3])))));
                        }
                    }
                }
                var_15 = (min(var_15, (~8799278042012399037)));
                var_16 = min((min(8799278042012399037, 2097151)), (min((max(9647466031697152579, 0)), (arr_12 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                var_17 -= (min((arr_12 [i_0] [i_0] [i_0] [i_1]), (((arr_12 [i_0] [1] [i_0] [i_0]) ? (arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_1 + 1]) : 1))));
            }
        }
    }
    var_18 = ((+((((!2097151) && 0)))));
    #pragma endscop
}
