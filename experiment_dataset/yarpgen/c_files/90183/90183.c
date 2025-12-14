/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(var_12, var_5));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(((max(var_9, (min(-8192, 2013265920))))), (arr_0 [8] [i_0])));
        var_16 = 2013265946;
    }
    var_17 = (max(var_17, var_6));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            {
                var_19 ^= (min(4294967295, 3594141761659363843));

                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_20 = (min(var_20, ((min((arr_8 [i_1] [i_2] [14] [i_2]), (min((arr_7 [15]), var_4)))))));
                    var_21 = (max(var_21, (arr_1 [i_2] [i_2])));
                    var_22 = 16383;
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_13 [i_2] [i_2] = (max(16375, (arr_6 [i_2 + 2] [i_2] [i_2])));

                    for (int i_5 = 4; i_5 < 18;i_5 += 1)
                    {
                        var_23 = (min(var_23, 123));
                        arr_17 [i_2] [i_2] = max(var_6, (max(var_11, (arr_9 [i_1 + 2] [i_2] [i_4] [i_5 - 3]))));
                        arr_18 [10] [i_2] [19] [i_5 - 1] = var_4;
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_22 [i_2] [i_2] [i_6] [i_6] [i_1] = 3501431477274552064;
                        arr_23 [i_2] = (-9223372036854775807 - 1);
                        var_24 *= (arr_12 [i_4] [i_2 + 3] [i_2 + 2]);
                    }
                }
                var_25 = 2013265920;
            }
        }
    }
    #pragma endscop
}
