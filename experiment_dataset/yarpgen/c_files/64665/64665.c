/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min((((~(arr_5 [i_1 + 1] [i_1 + 1])))), (arr_5 [i_1 + 2] [i_1 + 2])));
                var_16 = 0;
                arr_7 [i_0] = (arr_0 [i_1 - 1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_17 = ((min((arr_13 [i_2] [i_2] [i_3]), 0)));
                var_18 = (max(var_18, 0));
            }
        }
    }
    var_19 = (min(var_9, (min(var_0, var_6))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_20 = (((arr_11 [i_5] [i_5 - 1]) < ((((min((arr_10 [i_6]), 4294967284)) >= (16 >> 1))))));
                            arr_24 [i_4] [4] [i_5] [i_7] [i_7] [i_7] = ((min((arr_21 [i_5 + 2] [i_5] [i_7 - 2] [i_5 + 2] [i_5]), 1)));
                            var_21 = (arr_9 [i_4]);
                            var_22 = (min(((((arr_14 [i_4] [i_5 - 1]) || (arr_23 [11] [i_5 + 1] [i_6] [i_6])))), (max((arr_23 [i_4] [i_5 + 2] [0] [i_6]), (arr_11 [i_5 + 1] [i_5 + 1])))));
                        }
                    }
                }
                arr_25 [i_5] = 1;
            }
        }
    }
    #pragma endscop
}
