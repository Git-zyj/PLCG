/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = (max(var_20, 65535));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 -= ((((0 < (arr_7 [i_1] [i_1 + 1] [i_1]))) ? 65521 : (arr_2 [i_1] [i_1 + 1])));
                    var_22 &= (arr_2 [i_1 + 1] [i_0 + 2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_1 + 1] [21] = 65530;
                        arr_12 [i_1] [i_1] = (((arr_6 [i_1]) - (arr_3 [i_0])));
                    }
                }
            }
        }
    }
    var_23 = var_10;
    var_24 = var_12;
    #pragma endscop
}
