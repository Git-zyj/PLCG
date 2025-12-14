/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((32749 * (!144115188075855871)));
    var_14 |= (~var_0);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (((((536870912 ? var_1 : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
        var_16 = (max(var_16, ((min((((~(max(var_4, (arr_0 [8])))))), (max(15011098015821497685, (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = var_9;
        var_17 -= ((~(~var_6)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 = ((+(min((arr_0 [i_1]), var_12))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = (max((min((arr_5 [i_1] [i_2]), (arr_0 [i_1]))), ((max((arr_15 [i_1] [i_2] [12] [i_4]), (arr_5 [i_1] [i_1]))))));
                        var_20 -= (((max((~15011098015821497695), ((max((arr_4 [i_1]), (arr_5 [i_1] [i_1])))))) << (((((arr_12 [i_1] [6] [i_1] [i_1]) + (arr_12 [i_1] [i_2] [i_3] [i_4]))) - 1490017823))));
                        arr_16 [i_1] [i_1] [i_2] [i_1] [i_4] [i_4] = (max(((var_8 - ((((arr_9 [i_3]) ? (arr_5 [i_1] [i_1]) : (arr_11 [i_1] [i_4] [i_2] [i_2])))))), 0));
                        arr_17 [i_2] [i_2] = var_10;
                    }
                    var_21 = min(((((((4294967278 / (arr_7 [i_1])))) <= 3435646057888053945))), (arr_4 [i_3]));
                    arr_18 [i_2] [i_2] [7] [i_2] = (max(-15, ((((15011098015821497687 ^ (-9223372036854775807 - 1))) * (((((arr_15 [i_2] [1] [1] [13]) <= (arr_0 [i_1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
