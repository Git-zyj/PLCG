/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 ^= ((16 ? (max(((255 ? var_7 : 0)), 0)) : (arr_5 [i_0] [i_2])));
                    var_20 = (min(var_20, -63895));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = 0;
                    arr_13 [12] [12] [i_0] = var_9;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_21 ^= (((((~(arr_2 [i_0])))) <= var_7));
                    arr_16 [i_0] [i_1] [7] [0] = 0;
                    arr_17 [i_0] [0] [i_4] [i_4] = ((-(arr_0 [i_0] [i_1])));
                }
                arr_18 [i_0] = ((!((((var_13 ? -1 : -910585339213171683))))));
                arr_19 [i_0] [11] = var_9;
                arr_20 [3] [i_1 + 1] = (+(((!(((255 ? (arr_7 [i_1] [i_1] [i_0] [i_1]) : (arr_9 [i_0] [1] [i_0]))))))));
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
