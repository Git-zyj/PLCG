/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 &= (((((arr_4 [i_0] [i_2] [i_1] [i_1]) ? (arr_4 [i_1] [i_1] [i_2] [i_1]) : var_13)) - (arr_4 [i_0] [i_1] [i_2] [i_0])));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 = (max(((14141054775253009199 ? (arr_4 [i_0] [i_1] [i_0] [i_1]) : ((var_12 ? -489124519 : (arr_0 [i_0] [i_0]))))), (min((max(6793384659041609072, 13375751244852055184)), 0))));
                        var_20 = -5387741831162444695;
                        var_21 = min((arr_5 [i_1] [i_1]), var_15);
                        var_22 = min((arr_6 [i_0] [i_1] [i_2] [i_3] [i_2]), (arr_2 [i_0] [i_1] [i_1]));
                    }
                }
            }
        }
    }
    var_23 *= -var_5;
    var_24 = ((~(((((max(var_2, var_10))) > var_15)))));
    #pragma endscop
}
