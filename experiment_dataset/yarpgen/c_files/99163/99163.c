/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_1, (((((var_15 ? 54 : var_1))) ? ((2240806572128151672 ? 2539549805670487898 : var_2)) : ((((-54 + 2147483647) << (57 - 57))))))));
    var_19 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_1 [i_0])));
        var_20 = (arr_3 [i_0]);
        arr_5 [i_0] [i_0] |= ((((((!var_10) ? var_7 : var_13))) ? ((~(~var_15))) : 1));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] = ((arr_8 [i_1 - 2] [i_1 + 1]) ^ (~var_13));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 = (((arr_6 [i_3 + 2]) ? 16205937501581399934 : (arr_6 [i_1 + 1])));
                    var_22 |= (arr_6 [i_1 - 2]);
                    var_23 -= (((((var_11 ? (((var_9 + (arr_7 [i_3])))) : ((var_15 ? 16205937501581399934 : var_11))))) ? (((arr_7 [i_2]) ? (((var_16 ? var_16 : -1722802155))) : ((-1722802155 ? (arr_10 [i_2]) : 2093056)))) : (max((max(959630631, -26283)), (var_13 == var_9)))));
                    var_24 = -28;
                }
            }
        }
        arr_14 [i_1] = ((min(-32763, 105)));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_25 = (arr_18 [i_1] [i_1]);
                        arr_23 [i_1] [i_1] [i_5] [i_6] = (((arr_17 [i_1 - 3] [i_1]) / 16205937501581399952));
                        var_26 *= ((-3265162532308444634 ? 9104 : 117));
                        arr_24 [i_1] [i_4] [i_1] [i_6] = var_8;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_27 = (min(var_27, (((~(arr_8 [i_1] [i_1 + 1]))))));
                            arr_28 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] = -1513202873;
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_28 -= (arr_30 [i_1] [i_4] [i_5] [i_6] [i_8]);
                            arr_31 [i_1] [i_4] = (((arr_26 [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1]) ? ((((arr_17 [i_1] [i_5]) + 6))) : ((var_3 ^ (arr_30 [i_1] [i_4] [i_5] [i_6] [i_8])))));
                        }
                    }
                }
            }
            var_29 += (arr_11 [i_1 + 2] [i_1 + 2] [i_1 - 1]);
            var_30 ^= (arr_17 [i_1 + 4] [i_1 + 1]);
        }
        arr_32 [i_1] [i_1] = (((((max(80, (arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1])))) / (4294967295 >= var_9))));
    }
    #pragma endscop
}
