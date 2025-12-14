/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] = (arr_2 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 ^= (!153);
                                var_18 = var_10;
                            }
                        }
                    }
                    var_19 &= 7645;
                }
                var_20 = (max(var_20, (((((((var_8 != (arr_8 [i_0 + 2] [i_1] [16] [i_1]))) ? 4611686018427387840 : 13835058055282163777)) > (arr_11 [18] [i_1] [18]))))));
                var_21 = (min(var_21, (arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 3])));
            }
        }
    }
    var_22 = (var_11 ? var_8 : 7627);
    var_23 = var_8;
    #pragma endscop
}
