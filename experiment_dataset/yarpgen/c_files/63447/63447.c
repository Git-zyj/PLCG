/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((0 ? ((var_11 >> (0 + 0))) : 0));
                var_14 = (min(var_14, ((~((min(131, (((867891344 > (arr_3 [i_0] [i_1])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 ^= ((~((~((100 ? var_6 : var_8))))));
                            arr_11 [1] = (((arr_7 [i_0] [i_0] [i_2] [i_3]) | ((((arr_7 [i_1] [i_1] [i_2] [i_3]) ? (arr_7 [i_3] [i_2] [i_1] [i_0]) : var_11)))));
                            var_16 = var_12;
                            var_17 = (arr_2 [i_0]);
                        }
                    }
                }
                var_18 &= ((((~(min(var_1, var_11)))) * -var_6));
            }
        }
    }
    var_19 = -0;
    var_20 = var_6;
    #pragma endscop
}
