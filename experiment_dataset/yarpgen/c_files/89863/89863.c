/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_10 *= (((!(~258231393))));
        var_11 = (max(var_11, ((((arr_2 [i_0 + 1]) + (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 1]) : var_4)))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0 + 2] [6] &= (((((var_3 ^ var_2) ? ((0 ? -5883196629790909742 : 10568)) : (~var_3))) > var_5));
            var_12 = (max(var_12, ((((((var_5 ? var_8 : ((var_8 ? (arr_2 [1]) : (arr_0 [14])))))) ? 23 : (arr_1 [i_0] [8]))))));
        }
        var_13 = (min(var_13, (((((!(((var_1 ? var_2 : var_6))))) ? (!var_0) : var_0)))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((~var_1) ^ var_2)))));
                                var_15 ^= min((((((var_8 - (arr_2 [i_4]))) / (((arr_8 [i_3]) - (arr_5 [i_4] [i_4])))))), -var_9);
                                var_16 -= var_7;
                                var_17 ^= var_1;
                                var_18 *= (max(23, 15));
                            }
                        }
                    }
                    var_19 ^= (arr_15 [i_4] [i_3] [i_3] [9]);
                    var_20 ^= ((((max(((min(-7153, var_8))), (arr_3 [i_2] [i_3 + 1] [i_2])))) ? ((((min(var_3, (arr_3 [i_2] [i_3 + 1] [5])))) ? -5772487350122599005 : (arr_18 [i_2] [i_2] [i_2] [i_4]))) : ((((!(arr_18 [1] [i_3] [i_3] [i_4])))))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((((max(var_8, (var_8 || var_0))) ? ((min(15, var_7))) : (((-(var_9 && 8465454060309706338)))))))));
    #pragma endscop
}
