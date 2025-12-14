/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((var_3 ? var_7 : var_2) ^ ((min(88, -676579743416296961)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_3] [i_2] = ((((((arr_3 [i_0]) ? -12409 : (arr_5 [i_0] [i_0] [i_3])))) * (arr_2 [i_0] [i_0])));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((!((max((arr_0 [i_1] [i_2]), (arr_0 [i_2] [i_3]))))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (min((((min(-12409, -12409)))), (((arr_0 [i_0] [i_1]) - ((min(var_8, 676579743416296961)))))));
                arr_13 [i_1] = ((-((~(~1536452124361053400)))));
                arr_14 [i_0] [i_1] = ((!((((arr_7 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1]) : 0)))));
            }
        }
    }
    var_15 = (((var_10 ? 1500942731 : var_7)));
    #pragma endscop
}
