/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_0 ? (var_11 * 2147483647) : ((((var_9 ? var_12 : var_4)))))))));
    var_15 = (min(var_15, (((-((-var_11 ? var_11 : var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 ^= ((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = 8405385460805073105;
                    var_17 = (((((34408 ? var_3 : 1)) > ((var_5 ? (arr_2 [i_1]) : var_1)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_18 -= ((((min((!var_13), var_2))) / ((min(1, -117)))));
                        var_19 &= ((min((arr_2 [i_0 - 2]), 255)));
                        var_20 = (min(var_20, 63));
                        arr_12 [i_0] [i_0] [i_3] [i_4] [i_3] [i_4] = (((arr_3 [i_0] [i_1]) / ((1 ? var_5 : 1))));
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_21 -= (min((arr_6 [i_0] [i_0]), (arr_13 [i_5 - 3] [i_5 + 2] [i_5] [i_5 - 3])));
                        var_22 = ((((1 ? -8405385460805073113 : 8405385460805073112)) >= -1746300802));
                        var_23 = ((((((arr_9 [i_3] [i_3] [i_3]) ? (arr_8 [i_0 + 1] [i_1] [i_0 + 1]) : (arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0])))) ? (((((arr_1 [i_0]) ? (arr_11 [i_0 - 1] [i_1] [i_3] [i_3]) : (arr_6 [i_5 - 3] [i_0]))) * (((min(29298, (arr_8 [i_1] [i_1] [i_1]))))))) : var_8));
                        var_24 = ((((((var_11 & (arr_2 [i_5]))) / (arr_15 [i_1] [i_1]))) ^ ((((arr_11 [i_0] [i_0] [i_5 + 2] [i_3]) ? (arr_11 [i_0] [11] [i_5 + 1] [i_3]) : 55848)))));
                        var_25 = (min((((((1 ? -8405385460805073114 : 2147483647))) ? var_2 : ((3859471966 ? -1166633018 : -512)))), (((((arr_9 [i_3] [i_3] [i_3]) ? 0 : var_12)) / -var_12))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_26 = (var_1 * var_8);
                        var_27 = ((((((arr_9 [i_3] [i_3] [i_6]) + (arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_3])))) / (((arr_3 [i_6] [i_6]) ? var_6 : var_10))));
                        var_28 = (~var_13);
                        var_29 = (max(var_29, (((-(arr_1 [i_0]))))));
                        var_30 = ((!(arr_15 [i_3] [0])));
                    }
                    var_31 += (arr_0 [i_1]);
                    var_32 = (max((((!15) & 1)), 65526));
                    arr_19 [i_0] [i_1] [i_3] = (arr_0 [i_0 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
