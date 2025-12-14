/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_17 -= ((~((~((~(arr_0 [i_0])))))));
                            arr_12 [i_0] [i_1] [1] [1] = (((arr_0 [i_0]) < (((!(arr_6 [i_1]))))));
                        }
                    }
                }
                var_18 = (max(var_18, (((~(arr_10 [i_1 - 2] [1] [i_1] [i_1] [i_1]))))));
                arr_13 [i_1 - 1] = (arr_0 [i_1]);
            }
        }
    }
    var_19 = -var_12;
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_20 = (max(var_20, ((((arr_17 [i_4] [i_5] [i_5]) || (arr_18 [i_4] [i_5]))))));
                var_21 = (min(((~(((arr_15 [i_4 - 3] [6]) | (arr_17 [i_4] [i_5] [i_4]))))), (min((arr_15 [i_4 - 3] [i_5]), (arr_17 [i_4] [2] [i_5])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            {
                arr_23 [i_7] = ((-(((!(((~(arr_20 [i_6] [i_6 + 1])))))))));
                arr_24 [i_6] [i_7] [i_7] = ((-((max((arr_21 [i_6] [i_7]), (((!(arr_21 [i_6] [i_7])))))))));
            }
        }
    }
    #pragma endscop
}
