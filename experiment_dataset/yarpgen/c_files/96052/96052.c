/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (~var_0);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [i_0] = ((var_10 >= (arr_2 [i_1 - 2] [i_1 - 2])));
                    arr_11 [i_0] [i_1 - 2] [i_0] = -9260;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_12 ^= var_11;
                            var_13 = ((((var_0 ? var_11 : 9223372036854775807))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (((var_3 + 2147483647) >> (var_2 - 30358)));
    #pragma endscop
}
