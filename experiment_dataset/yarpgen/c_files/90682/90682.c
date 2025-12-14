/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-1878188362 ^ 111) - (((43 - -93) ^ 22814))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((((!var_16) ^ (var_6 + var_13)))) ^ (((var_15 ^ var_0) - (var_10 ^ var_16)))));
        var_20 = (~1);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 += (((((0 * 44062) + -1123526207568531367)) - (1123526207568531361 ^ -127)));
        var_22 = (((((4294967295 + 128) - 1123526207568531351))) ? ((((127 << (246 - 236))))) : var_1);
        var_23 = (min(var_23, ((((var_14 ^ -var_14) - (((var_9 ^ var_5) ? (var_1 ^ var_5) : (0 + 1))))))));
        arr_7 [i_1] = var_6;
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_24 = ((((var_4 << (-var_1 - 8401643500969344770))) + ((((-20884 ^ -1) + 127)))));
        var_25 = (min(var_25, var_9));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_26 = (((((var_8 - var_8) << (var_7 - 17764))) ^ (((((1 ? 0 : -6148939839183299514))) ? (18446744073709551615 - 2284) : (!var_0)))));
                var_27 = (min(var_27, ((((((1423920324 ^ 1) & (var_14 ^ var_18))) ^ ((((21255 - 9) + (14 + 24538)))))))));
                var_28 = ((((((var_5 / var_4) + (var_7 * 0)))) ? (((!var_13) - var_5)) : (((((var_13 << (var_1 - 10045100572740206826))) ^ ((var_3 << (var_3 - 16992))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_23 [i_5] = ((var_12 << (!var_7)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_6] &= var_15;
                                arr_30 [i_5] [i_6] [i_5] [i_8 + 2] [i_9] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
