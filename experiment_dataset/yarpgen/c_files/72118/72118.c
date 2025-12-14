/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = var_13;
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((max(var_3, 7168)));
                    }
                }
            }
        }
        var_14 = (((1 ? ((240 ? 240 : (arr_2 [9] [9] [9])) : (arr_4 [i_0 - 2] [i_0 - 2])))));
        var_15 = (min(var_15, (((min(-31, 65285))))));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((min(-5989, (((arr_8 [i_4 + 1] [12] [12] [i_4 - 2]) + ((((arr_6 [10] [i_4 - 3] [i_4 - 2]) + 20796))))))))));
        var_17 = var_12;
    }
    var_18 = (min(var_18, (((((min(var_12, 1)))) >= var_8))));

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_17 [i_5] = var_0;
        arr_18 [i_5] = var_10;
    }
    var_19 = var_12;
    #pragma endscop
}
