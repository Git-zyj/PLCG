/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 41303;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0] [i_2 + 1] = (min((arr_3 [i_0 - 1]), (((arr_1 [i_0 - 1]) ? var_10 : (((39404 != (arr_5 [i_0 + 1] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        var_14 |= 255;
                        arr_10 [i_0 - 1] [i_0] [i_1] [i_3 + 3] = (arr_1 [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_15 = ((((0 & (arr_1 [i_0 + 1])))) ? (arr_6 [i_0] [i_1] [i_2 + 1] [i_4]) : (((arr_1 [i_0 + 1]) ? (arr_0 [i_1]) : var_9)));
                        arr_13 [i_0 - 1] [i_1] [i_2 + 1] [i_4] [i_0] [i_0 - 1] = var_11;
                    }
                }
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
