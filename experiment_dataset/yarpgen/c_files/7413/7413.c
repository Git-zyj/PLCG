/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((((var_15 << (-15 + 22))) >= (1 | 1)))) >> (var_11 + 22027))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] = (!-2);
                        var_19 = (max(var_19, ((((~-64) - -64)))));
                        var_20 = 5;
                    }
                    var_21 = ((((min(1, (arr_3 [i_0] [i_1])))) || ((min((arr_3 [i_1] [i_0]), 1)))));
                    var_22 = (min(var_22, (((((((~1) && (arr_10 [i_2] [i_2] [i_2 - 3] [i_2] [i_2])))) << ((((1 - 8855193865217377484) && (arr_3 [i_2 - 3] [i_2 + 1])))))))));
                    var_23 = (((max(((1 - (arr_6 [i_0] [i_0]))), -64)) << (14 == 76)));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_24 = (!3);
                            var_25 = ((((min(1, (0 - 1)))) ? (max((arr_14 [i_0] [i_2 - 3] [i_2] [i_5 + 2] [i_5]), ((((arr_15 [i_0] [i_1] [i_2] [i_4] [i_5 - 1] [i_4] [0]) || (arr_0 [i_5])))))) : (((max(8717692057096105355, (-32767 - 1))) << ((((max(1, -1))) - 1))))));
                        }
                        var_26 = ((!(var_16 - -273562687250571328)));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_27 ^= (min(((min((-127 - 1), (arr_4 [i_0])))), (((arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 3] [i_2 + 1]) * (arr_8 [i_2 - 2] [i_2 - 3] [i_2 - 1] [i_2 + 2])))));
                        arr_21 [i_0] [4] [4] [i_2] = 0;
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        arr_24 [2] = (((!1) ? ((min(-18604, 1))) : ((((arr_23 [i_7 - 1]) <= (arr_22 [i_7] [i_7]))))));
        arr_25 [i_7] = (max((((max(1, (arr_22 [20] [i_7]))) >> (((min(-63, (arr_22 [i_7] [i_7]))) - 16550570591175283601)))), ((min((-1290 || -9), 1)))));
        var_28 *= ((~(((((min(114, var_17))) || 9223372036854775808)))));
    }
    var_29 = 56;
    #pragma endscop
}
