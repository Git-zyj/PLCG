/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (7 ^ 0);
    var_16 *= (((-((2147483647 ? var_6 : var_7)))));
    var_17 ^= (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min(((((var_13 ? var_5 : var_8)) | ((((arr_4 [i_1] [i_1] [i_1]) ? (-2147483647 - 1) : var_1))))), (((((min((arr_4 [i_0] [i_0] [i_0]), 9223372036854775807))) ? 96 : (((arr_5 [4]) * 0))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_3] [i_0] = 0;
                            arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_3] [i_0] = arr_8 [i_0 + 1] [i_0] [i_0 + 3] [i_2];
                            var_19 |= var_7;
                            var_20 = ((max(var_5, (arr_2 [i_0 + 2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
