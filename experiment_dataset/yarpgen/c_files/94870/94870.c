/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((!((((arr_1 [i_0]) & (arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 = (arr_5 [i_0]);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_1] [i_1] [i_1] |= 21241;
                            var_13 = (min(2032, 63942));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_14 -= (arr_5 [i_0]);
                            arr_15 [i_5 + 3] [i_3] [i_1] [i_1] [i_1] [i_1] [4] = (arr_8 [i_0] [i_1] [i_3 + 4] [i_5 + 4]);
                        }
                    }
                }
            }
        }
    }
    var_15 = (-1 ? (!-95) : ((((max(var_5, var_2)) == var_3))));
    #pragma endscop
}
