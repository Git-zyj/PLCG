/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0] [i_0]) & (arr_3 [i_0] [i_0]))) << ((+((((arr_1 [8] [i_0]) >= (arr_2 [i_0]))))))));
        var_16 += (arr_0 [i_0]);
        var_17 = ((((arr_0 [i_0]) && (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_18 = (max(var_18, ((((arr_5 [i_1 + 1] [16]) ? 7525 : (~var_13))))));
        var_19 = (arr_4 [i_1 + 3]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_20 = (arr_8 [i_1 - 2]);
                    var_21 = (min(var_21, (((var_5 <= (arr_5 [i_1 - 1] [i_2 - 1]))))));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_22 = ((((min((arr_10 [i_4] [i_4 + 1] [7] [i_4 - 1]), var_7))) || (arr_10 [i_4] [i_4 - 2] [i_4] [i_4 + 2])));
        var_23 = -14635;
    }
    var_24 = var_9;
    #pragma endscop
}
