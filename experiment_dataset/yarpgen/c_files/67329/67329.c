/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 ^= ((max(var_9, var_0)) / var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_13 ^= (min((arr_4 [i_0 - 2] [i_1] [i_1 - 4]), ((((arr_4 [i_0] [i_1] [i_1 - 2]) > (arr_4 [i_0] [20] [i_1 - 3]))))));
                var_14 -= ((((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? ((min(var_7, var_5))) : (((95 ? -9 : 0)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_9 [i_2] = (arr_6 [i_2 - 1] [i_2 + 1]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((((((arr_5 [i_2] [i_2]) || -1777781045)) ? (((arr_11 [i_2 + 3] [i_3] [i_3] [i_5]) ? (arr_13 [i_2] [7]) : var_9)) : var_6))))));
                            arr_16 [i_2] [2] [i_3] [i_2] = (max((arr_15 [i_2] [i_2 - 1] [i_2 + 2] [i_2]), ((((arr_6 [i_2 + 1] [i_5]) > (arr_6 [i_2 + 3] [i_4]))))));
                            var_16 ^= (min((((arr_14 [i_2] [i_2] [i_2] [i_4] [i_5]) ? (arr_14 [i_5] [i_4] [i_4] [17] [i_2]) : (arr_12 [i_3] [i_3]))), ((max((arr_12 [i_4] [14]), (arr_12 [i_4] [i_4]))))));
                            var_17 = (max(var_17, ((min(2147483647, var_10)))));
                        }
                    }
                }
                arr_17 [i_3] = arr_15 [i_2] [i_2] [i_2] [i_2 + 2];
            }
        }
    }
    var_18 &= (((((min(var_3, var_6)) - -4))) | var_4);
    #pragma endscop
}
