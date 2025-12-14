/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = (min((var_7 != 29), (((arr_5 [i_0]) ? var_12 : -567120401))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_17 ^= ((((!(!var_2))) || (((~(~-23389))))));
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = (((min((~var_3), -746089264)) >> ((((((min(-1070119667, 112))) ? ((min(-746089278, -746089271))) : ((var_14 ? (arr_1 [i_0]) : var_11)))) - 18446744072963462292))));
                            }
                        }
                    }
                    var_18 -= -4880941683365072210;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (((((((arr_8 [i_0] [i_1] [i_2] [i_2]) ? 11174 : var_5))) ? ((~(arr_6 [i_5] [i_2] [i_0]))) : -var_2)));
                        arr_17 [i_0] [i_1] [i_0] [i_2] = ((-36555978 ? 3838976463 : 123));
                        var_20 = (((max((arr_6 [i_0] [i_2] [0]), var_6)) * (min((arr_9 [i_0] [i_1] [i_2] [i_0]), ((var_3 ? var_3 : 51))))));
                    }
                    var_21 = ((!(((var_5 ? (-24 + 541197818199314396) : (var_2 + 83))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_23 [i_6] [i_7] [i_6] = ((((3838976463 != (~var_15))) ? (min((min(var_11, var_0)), (~2039834461))) : ((((~3232235911) + -746089277)))));
                arr_24 [i_7] [i_7] = (min((((1836554305 - -65) / -105)), (-var_16 * -105)));
                var_22 = -8221;
            }
        }
    }
    #pragma endscop
}
