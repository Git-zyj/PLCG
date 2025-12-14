/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((var_2 ? var_11 : var_14)) - var_2)), (var_14 * 7634)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((12802386753623206273 - (((((((arr_0 [i_0]) | -1843799615)) > var_11))))));
                var_17 = ((~((min((arr_3 [i_0]), (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_18 = (21674 < 34587);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_3] = 2758741270;
                var_19 = (max(9173744718396942094, 0));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [2] [i_2] [4] [i_2] = (28 < 248);
                                var_20 = 31;
                            }
                        }
                    }
                }
                var_21 = var_3;
                arr_21 [i_3] [i_2] [i_2] = 21674;
            }
        }
    }
    #pragma endscop
}
