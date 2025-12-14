/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_12 = (((1 ? 20 : 1)));
            var_13 = arr_6 [i_1 - 1] [i_1];
        }
        arr_8 [i_0] = (arr_4 [i_0]);
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [i_5] [i_5] [i_5] = (((((-1 - (-2147483647 - 1)))) ? (arr_15 [i_2 + 1] [i_3 - 2] [i_3 - 2]) : (((arr_15 [i_2 - 1] [i_3 - 2] [i_3 - 1]) ? (arr_15 [i_2 + 1] [i_3 + 1] [i_3 - 1]) : (arr_15 [i_2 - 2] [i_3 - 1] [i_3 + 1])))));
                        arr_20 [i_5] [i_4] [i_3] [i_2] = 1;
                    }
                }
            }
            var_14 = ((((max(1, (arr_13 [i_2] [i_2 + 1] [i_2])))) ? (((((arr_13 [i_2 - 1] [i_3] [i_3 + 1]) >= -5)))) : (arr_13 [i_2 + 1] [i_2] [i_2 + 1])));
            arr_21 [i_2 - 1] [i_2 - 1] |= ((~(arr_15 [i_2] [i_3 + 1] [i_2])));
        }
        arr_22 [i_2] = (arr_12 [i_2] [i_2]);
    }
    var_15 = (~((-(var_1 >> 0))));
    var_16 = (((~((1 ? 43422 : 255)))));
    #pragma endscop
}
