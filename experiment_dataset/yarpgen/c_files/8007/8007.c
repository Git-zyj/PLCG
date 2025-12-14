/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((1 ? var_11 : 1)));
                arr_5 [i_0] [i_0] [i_1] = max(22167, (!var_10));
                arr_6 [7] [7] = (min(var_16, (arr_2 [i_0] [i_0] [i_0])));
                var_19 += ((((((arr_0 [i_1 - 2] [i_1 - 1]) ? (arr_3 [i_1 - 3] [i_1 - 3]) : var_10))) ? ((((arr_3 [i_1 - 3] [i_1 - 2]) ? (arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_1 - 2])))) : ((11505477629047152951 ? 871164027147273600 : 15))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 = ((-((min(32991, var_4)))));
        var_21 = var_14;
        var_22 = ((~((-15 ? 32985 : (arr_2 [i_2] [8] [i_2])))));
        arr_9 [i_2] [i_2] = 4095;
    }
    var_23 = ((((min(var_1, var_10))) + ((var_7 ? -4294967286 : var_17))));
    var_24 = var_5;
    #pragma endscop
}
