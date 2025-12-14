/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((((arr_5 [i_0] [i_2] [i_2]) ? (arr_1 [14]) : 147))) ? (~var_10) : (((((((max(15, var_2)))) >= (var_1 - var_6)))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_3] = 16313;
                        var_12 = (min(var_12, ((((arr_9 [i_0] [i_1] [i_1 + 1]) ? (arr_9 [i_0] [i_1] [i_1 - 2]) : (arr_9 [i_0] [i_1] [i_1 + 2]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_13 = (~0);
                        var_14 -= ((-(arr_12 [4] [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 2] [i_2 - 2])));
                        var_15 = (max(var_15, (arr_1 [i_0])));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_16 = (!var_1);
            var_17 = var_5;
            var_18 = ((~(arr_3 [i_6])));
        }
        var_19 = (max(var_19, (((65521 | (0 <= 0))))));
        var_20 = (arr_1 [i_5]);
    }
    #pragma endscop
}
