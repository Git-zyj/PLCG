/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((!((min(var_15, var_15))))) ? ((min(1, (min(var_9, var_17))))) : (min((-31841 | var_4), (~var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 |= (min((((arr_2 [i_0]) ? (arr_2 [i_2]) : (arr_2 [i_1]))), ((((~(arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 *= (((((arr_11 [i_3]) % (max(var_5, (arr_2 [i_4])))))) ? (((((((-9223372036854775807 - 1) ? var_14 : 263518827506338807))) ? (!var_5) : (arr_0 [i_2])))) : ((var_0 ? (((var_4 % (arr_3 [i_4] [i_3] [i_0])))) : (max(var_4, -8909964947167128076)))));
                                var_21 = (max(var_21, ((min(((((((arr_2 [11]) ? -18395898036328706 : (arr_4 [i_2] [i_2] [i_2]))) >= ((((arr_6 [i_0] [i_3] [i_1] [i_1]) ? (arr_9 [17] [i_3] [i_2] [i_1] [i_0]) : 1)))))), (arr_1 [17]))))));
                                arr_13 [i_2] [i_4] = ((((123 ? 2147483647 : (arr_4 [4] [i_1] [i_1]))) % (((arr_5 [3] [3] [i_4 + 1]) ? (arr_5 [i_0] [5] [i_4 + 1]) : (arr_5 [i_0] [1] [i_4 + 1])))));
                                arr_14 [i_0] [14] [10] [16] [i_3] &= (min((((arr_12 [i_3] [i_1]) ? (min((arr_5 [i_0] [i_3] [1]), (arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 + 1]))) : (min(var_11, (arr_8 [i_4 + 1]))))), ((((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1]) >= (arr_7 [i_4 + 1] [1] [i_4 + 1]))))));
                                var_22 = (((min((arr_9 [15] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]), -6424)) >= (((arr_10 [i_0] [i_0] [i_0] [1]) % (arr_1 [i_4 + 1])))));
                            }
                        }
                    }
                    arr_15 [11] [i_1] = (min((min(var_5, (min(var_5, 60037)))), ((((((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) ? 0 : 14))) % (min((arr_2 [14]), var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
