/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (min(-var_7, 1043805528))));
    var_15 ^= (min(var_9, var_5));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((~(835570867 % 4294967295))) | var_7));
                    arr_9 [i_0] [i_1] = var_10;

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (-(~var_7));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_0 + 2] [i_0] [i_2] [11] [i_4] = ((~((((min(var_11, var_1)) == (var_3 | var_1))))));
                            var_18 ^= var_9;
                        }
                        var_19 = var_4;
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_20 = (((5648396310196096001 < var_9) == -196));
                        var_21 = (((max(var_8, var_7))) == (((-17635 == ((min(118, 144)))))));
                        var_22 = (min((min(var_3, var_0)), ((max((var_5 < var_3), (~1))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
