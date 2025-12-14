/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((~10201951603760019769) << ((((-(~10966769439438462924))) - 10966769439438462897))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 = (~1);
                        arr_13 [i_1] = max((36533 & 17), (-18 < -1));
                        arr_14 [i_0] [i_1] [i_0] [i_1] = ((~(~240)));
                    }
                }
            }
            arr_15 [i_1] = -17;
            var_13 = (min(var_13, ((((!1) << (((-8750 + -16) + 8789)))))));
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = ((~((min(23351, 0)))));
        arr_19 [i_4] [i_4] = (min(((max(46307, 42184))), (~2147483647)));
    }
    var_14 = var_3;
    #pragma endscop
}
