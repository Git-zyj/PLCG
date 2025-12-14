/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 |= ((((max(1, 241))) * -0));
        var_21 = (max(7, (!1)));
        var_22 = (max((min(58, var_0)), (6112779934730715818 && var_10)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 &= ((~(((arr_2 [i_1] [i_1]) ? -1878096994 : ((min(1, -2234)))))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_24 += (max((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]), var_4));
                            var_25 = (!((max(12272687279761888054, (arr_7 [i_5])))));
                        }
                    }
                }
            }
            var_26 = (max(var_26, ((max((max(0, (max(var_13, (arr_12 [i_1] [9] [i_1] [i_1] [i_1]))))), (((max(var_16, (arr_1 [i_1]))))))))));
            arr_15 [i_1] [i_2] [i_2] = -9223372036854775790;
        }
    }
    #pragma endscop
}
