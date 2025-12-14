/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((14892 / var_3), var_13));
    var_16 = (var_6 / 32762);
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_18 = (max(var_18, ((((~1) <= 2047)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 1] [17] = 1;
                            var_19 = ((arr_5 [i_0 - 1]) % 2046);
                        }
                    }
                }
            }
        }
        arr_15 [i_0 - 1] = (~2047);
        arr_16 [i_0] = ((0 ? 2047 : 55048));
    }
    #pragma endscop
}
