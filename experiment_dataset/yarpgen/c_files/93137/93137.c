/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [20] [20] = 11056656273869221853;
                    var_10 = (max(var_10, (((((!(arr_5 [i_0 - 1])))) >> (((min((arr_7 [i_0 - 2]), 11056656273869221850)) - 174))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [17] [13] [i_3] [17] = (((arr_4 [i_0] [i_0] [i_0]) ? 11056656273869221853 : 299256696));
                                var_11 = (max((((((11056656273869221871 ? -7133863232647590462 : 3047813407)) - (((max(12189, (arr_7 [i_0])))))))), ((((((arr_10 [i_0] [0] [i_0] [0] [i_0] [i_2 - 1]) - var_1))) / 10233302429612162522))));
                                arr_17 [i_0] [i_2] [i_0] [i_3] [i_0] [i_4] = ((118 ? 175 : 0));
                            }
                        }
                    }
                    var_12 = (max(var_12, ((max(((~(arr_5 [i_0 - 3]))), ((max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 3])))))))));
                }
            }
        }
    }
    var_13 ^= -9927748129750372369;
    var_14 = (max(var_14, var_7));
    var_15 ^= var_2;
    #pragma endscop
}
