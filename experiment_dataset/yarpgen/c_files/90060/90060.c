/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((-var_3 ? var_6 : (((var_0 ? var_2 : var_9))))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((((~(!-1)))) ? -var_12 : ((((((arr_5 [i_1]) ? (arr_0 [i_0] [i_1]) : var_4))) ? (arr_6 [i_0] [i_0] [i_0]) : var_4))));
                    arr_8 [i_1] [i_1] [i_1] = (min(((-(~var_3))), (((var_10 ? (arr_1 [i_0] [i_0 - 3]) : (~772999003))))));
                    var_19 = (max(var_19, (!15)));
                }
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
