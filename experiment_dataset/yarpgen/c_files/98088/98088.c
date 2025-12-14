/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (((((((min(-8, 5751664799385288090)) + 9223372036854775807)) << (((arr_1 [i_0]) - 210)))) >= ((((((var_9 ? var_8 : 0)) > ((((arr_0 [i_0]) & (arr_1 [i_0]))))))))));
        var_11 *= (((9223372036854775807 ? (arr_1 [i_0]) : -var_4)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_12 = min((~var_2), (0 | 48));
        var_13 = (arr_2 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_14 *= (!1468696182);
                        var_15 ^= var_6;
                        arr_14 [i_2] [i_4] [i_4] [i_5] = (arr_11 [i_2] [i_3] [i_4] [i_5]);
                    }
                }
            }
        }
        var_16 = (min(var_16, (~var_8)));
        var_17 *= (((arr_10 [i_2] [i_2] [i_2]) >= ((var_4 ? 0 : var_8))));
    }
    var_18 = (((0 <= -5751664799385288090) < (((228 << (var_6 - 170))))));
    var_19 = 0;
    #pragma endscop
}
