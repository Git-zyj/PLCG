/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min((-73 / 16383), ((-39697429 ? var_4 : var_9)))) == var_4));
    var_19 = var_13;
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] = 1006815111;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [11] [i_3] = ((var_5 ? (((var_17 ? (arr_0 [i_0 - 1]) : var_14))) : (~4294967295)));
                        var_21 = (((~var_2) ? (((arr_1 [i_0]) ? -1 : var_11)) : ((var_2 ? var_8 : var_1))));
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        var_22 = (min(var_22, (((65535 || (arr_2 [i_2 - 1] [i_1]))))));
                        var_23 = ((-((31962 ? 4294967295 : var_16))));
                        var_24 = (min(var_24, (((~(arr_15 [i_4 - 2] [i_2 - 1] [i_2 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2]))))));
                        arr_18 [i_4] [i_2 - 1] [i_2] [1] [1] = ((var_13 / ((549755813884 ? var_0 : (arr_10 [i_0] [i_0 + 2] [i_0] [i_0])))));
                    }
                    arr_19 [i_1] [i_2] = -28818;
                }
            }
        }
        arr_20 [i_0] = (((var_13 ? 10 : 839596078)));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_25 = 32256;
        arr_23 [i_5] [i_5] = ((~(8191 != 2047)));
    }
    var_26 = var_16;
    #pragma endscop
}
