/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (-4 >= var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((~((max((arr_1 [i_0]), (min(-31647, (arr_1 [i_0]))))))));
                var_19 = ((4119730590 < (min((arr_3 [i_0] [i_0]), ((max((arr_0 [i_1] [i_0]), 4119730609)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (~1299404159);
                            var_21 = ((((arr_2 [i_0] [i_3] [i_2]) ? (arr_2 [i_3] [i_1] [i_2]) : (arr_2 [i_1] [i_1] [i_1]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
