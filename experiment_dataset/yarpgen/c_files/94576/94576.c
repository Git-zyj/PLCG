/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_13 ? ((-var_10 ? ((var_3 ? 1217597285 : var_14)) : var_5)) : ((((((-102 ? var_3 : var_6))) ? (40026 != var_11) : (8160 * 0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = (max(0, ((!((min(1, var_10)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = 180;
                                var_19 = 255;
                                var_20 = (min(var_20, ((((((arr_8 [i_4] [i_2 - 1] [i_2 + 1] [i_1 + 1]) ? 65535 : 232)) << ((((max(var_11, 24))) - 23296)))))));
                            }
                        }
                    }
                    var_21 &= (((((!(arr_6 [i_2] [i_1])))) << (((min((arr_10 [1] [i_1 - 1] [i_2 - 2]), ((var_3 ? 40026 : 45)))) - 15995))));
                    var_22 *= (((((var_1 / (arr_0 [i_2 - 2])))) != ((((10196 ? var_14 : (arr_5 [i_0] [i_0] [i_0]))) * 40026))));
                }
            }
        }
    }
    var_23 = (max(var_13, (!142)));
    #pragma endscop
}
