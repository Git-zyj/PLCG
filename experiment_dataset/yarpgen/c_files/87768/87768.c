/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min(((((min(7786290965569708231, var_7))) ? (arr_4 [i_1]) : 63)), ((min((((arr_5 [i_2]) ? 966439950923815484 : (arr_0 [i_0]))), (min(-1603468858052911722, -966439950923815471)))))));
                    arr_10 [i_0] [17] [i_0] = (-(arr_9 [i_0] [6] [i_2] [i_0]));
                    arr_11 [i_0] [i_0] [i_0] = ((966439950923815482 ? var_12 : 1));
                }
            }
        }
    }
    var_20 = ((var_10 ? -2608537671056774833 : ((max((max(var_11, var_18)), 2039547262)))));
    var_21 = (((((var_14 * ((var_17 ? 31264 : 11249))))) ? (~var_6) : (-53 / 17739694294880499830)));

    /* vectorizable */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_22 = ((-((-104 ? 1 : var_6))));
        var_23 = ((((arr_13 [i_3]) || -966439950923815493)));
        var_24 = ((var_18 ? (arr_12 [i_3 - 4]) : (arr_3 [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_25 = (arr_19 [i_4 + 1] [i_3 + 1] [i_3 + 1]);
                    arr_21 [i_3] [i_3] [i_5] [i_3] = var_16;
                }
            }
        }
        arr_22 [i_3 - 2] = (arr_18 [i_3 + 1] [i_3 - 2] [i_3 - 2]);
    }
    #pragma endscop
}
