/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] |= (max(((min((arr_3 [0] [i_0]), (arr_3 [i_0] [i_0])))), ((~(((arr_2 [7] [i_1] [i_1 + 1]) ? (arr_3 [i_0] [i_0]) : var_5))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = ((((((max(0, -5265812404191946503)) + ((min(var_2, var_0)))))) ? (min(((((arr_8 [i_0] [i_1] [i_2 + 2] [i_1]) == var_7))), (min(var_11, var_1)))) : (min(((((arr_10 [i_0] [i_1]) ? var_6 : (arr_6 [i_1] [i_1] [i_2])))), ((var_1 ? var_4 : (arr_10 [i_0] [i_1])))))));
                            arr_13 [i_1] = (arr_1 [i_0] [i_0]);
                        }
                    }
                }
                var_13 = (((((((-9223372036854775807 - 1) ? 203671956980432150 : -2085935206291388443)))) ? (max((((var_10 ? (arr_7 [i_1]) : var_11))), var_3)) : ((min(var_4, (arr_7 [i_1]))))));
            }
        }
    }
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 6;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_15 -= var_5;
                arr_20 [i_4] = ((((((arr_14 [i_4 + 1] [i_4 + 4]) ? (arr_14 [i_4 - 3] [i_4 + 1]) : var_5))) ? (max((var_4 & var_5), ((min((arr_17 [5] [i_4] [5]), (arr_9 [i_4 - 3] [i_5] [i_4] [10] [i_4])))))) : (max(-2085935206291388443, (arr_3 [i_4] [i_5])))));
                var_16 = (arr_8 [8] [18] [i_4 + 4] [i_5]);
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 7;i_8 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min(4294967282, (((-(arr_30 [i_6] [i_8 + 2])))))))));
                                var_18 = (min(var_18, ((min((max((((arr_9 [i_4] [i_5] [i_6] [i_7] [i_8 + 3]) ^ var_3)), (arr_27 [i_6 - 1]))), (!var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
