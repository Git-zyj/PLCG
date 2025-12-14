/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] |= var_0;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = (min(var_13, (((1 > (arr_0 [i_1 - 1] [i_1 - 1]))))));
            var_14 = ((2097024 ? 2097010 : (arr_0 [i_0] [i_1 - 1])));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 = 4067744131074840758;
            arr_8 [i_0] = (((max(17612121484917872127, (arr_3 [i_0]))) == (!834622588791679489)));
        }
        arr_9 [i_0] [20] = -834622588791679489;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_16 = (arr_7 [i_3 - 1] [i_4]);
                    var_17 = (min(var_17, (((var_3 ? ((-(arr_7 [i_3 - 2] [i_3 - 1]))) : (((min((arr_0 [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4]))))))))));
                }
            }
        }
    }
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                arr_20 [14] [i_5 - 1] [i_5] = ((+(((arr_12 [i_6] [i_5 + 1]) ? ((var_4 ? var_4 : var_0)) : (var_7 > 24817)))));
                var_19 = (var_0 <= var_4);
            }
        }
    }
    #pragma endscop
}
