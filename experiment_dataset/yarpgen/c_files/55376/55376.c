/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((-var_8 ? (arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 2]) : (((arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2]) ? 8 : var_0))));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_1] = ((-((var_6 ? var_8 : 4294967270))));
                        var_12 *= ((((var_4 / var_0) ? 100436689 : (-114 + var_1))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = 11910;

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_13 = (77 - (((3945601961 - 0) + (((var_6 ? 0 : 7))))));
                            var_14 ^= ((2751602170 ? 4125945571 : 0));
                            var_15 = (((arr_11 [i_4 - 2] [i_3 + 1] [i_2 + 1] [i_1 - 1]) ? ((102435015 << (4194530637 - 4194530622))) : (((0 ? 1 : (arr_9 [i_1 - 1] [i_1]))))));
                        }
                        var_16 = (arr_15 [i_3 - 1] [i_3] [i_2 - 3] [i_2] [i_2] [i_2] [i_1 + 3]);
                    }
                    var_17 = (min(((((((var_8 ? var_6 : 0))) + (min(var_11, var_5))))), (min(-8180387464828880115, var_2))));
                }
            }
        }
    }
    var_18 = ((1 ? 1727095756 : 0));
    var_19 = var_2;
    #pragma endscop
}
