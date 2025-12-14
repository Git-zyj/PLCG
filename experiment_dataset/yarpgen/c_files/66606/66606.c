/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((max((arr_5 [i_0] [i_1] [i_2] [i_1]), var_3))) ? (((min(var_4, var_14)))) : (((1 >= (arr_3 [i_1 - 1] [i_1])))))))));
                    var_17 = ((!((max(117, (arr_1 [i_1 - 2]))))));
                    var_18 = (arr_4 [i_0] [i_0 - 2] [i_0 + 2] [i_1 + 1]);
                }
            }
        }
    }
    var_19 = (max(var_19, ((((((max(var_8, 37727)))) ? var_8 : (~127))))));
    var_20 = (((((max(-44, var_6))) ? var_2 : var_8)));
    #pragma endscop
}
