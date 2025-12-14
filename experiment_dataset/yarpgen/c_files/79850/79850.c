/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_17 ? var_16 : (((!(((4323455642275676160 ? var_7 : 113)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 -= ((((var_3 ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_0])))) ? (((~(arr_5 [i_0] [i_1])))) : (min((arr_5 [i_1] [i_0]), var_9)));
                arr_8 [i_1] [i_1] = (min((min((arr_6 [i_1]), (((-8814905130640266679 ? var_16 : var_16))))), ((-(min(var_2, var_0))))));
                var_20 |= min((((arr_7 [i_0] [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) - (arr_2 [i_0]))) : 3595389369617272937)), (--95));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = 5;
                    var_22 = min(((-(arr_9 [i_3 + 1]))), (min((arr_1 [i_4]), -125)));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] [i_3 - 1] [i_5] [i_2] = ((~((~(-9223372036854775807 - 1)))));
                        var_23 = ((((96 ? -13 : -3079615716443209560)) / 433762359593272877));
                        arr_19 [16] [16] &= min(((min((arr_15 [i_3]), -104))), (((8422528606063469819 == (403656529266402845 != 113)))));
                    }
                    var_24 = (min(var_24, ((min(113, (((-((min(var_17, -105)))))))))));
                }
            }
        }
    }
    #pragma endscop
}
