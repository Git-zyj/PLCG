/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_19 = (!((((arr_1 [i_0] [i_0]) ? -6380509327900791984 : ((max(1075842355, 464115328)))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 += -1075842356;
        var_21 = ((-(arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_22 = (!0);
                        var_23 ^= (arr_3 [i_2]);
                        var_24 = var_11;
                    }
                }
            }
            var_25 = (arr_10 [i_1] [i_1] [i_2]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_26 = (!-1075842356);
            arr_17 [i_1] = (((arr_1 [i_5] [i_1]) / (arr_4 [i_1] [i_5])));
            var_27 |= ((202918642 ? 287948901175001088 : 1));
        }
    }
    #pragma endscop
}
