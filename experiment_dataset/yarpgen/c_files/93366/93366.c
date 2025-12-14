/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((50788 + 1298828471) != var_3));
                        var_17 = var_6;
                        var_18 = (arr_8 [i_0] [i_1 - 1] [i_1] [i_1 - 1]);
                    }
                }
            }
        }
        arr_11 [i_0] = (!2996138825);
        arr_12 [i_0] [i_0] = var_14;
        var_19 = (max(-6006, 123));
        var_20 = ((!((((6913140414093806221 << (1298828471 - 1298828462)))))));
    }
    #pragma endscop
}
