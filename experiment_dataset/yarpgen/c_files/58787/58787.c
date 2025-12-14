/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (((((~((((-9223372036854775807 - 1) == 11779198302284976658)))))) ? (max((arr_2 [i_0 - 1]), (arr_1 [i_0 - 1]))) : ((-((33 ? var_7 : (arr_0 [i_0])))))));
        var_16 = (max(var_16, ((-112 - ((max(1, 112)))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_17 = (max(var_17, (((8824485017241828062 ? (-9223372036854775807 - 1) : 1)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 = 240;
            var_19 = ((((min(91, 7744480356411416167))) ? (arr_8 [i_1] [i_1 + 1]) : (arr_5 [i_1])));
        }

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_1] [i_3] = (((((91 ? ((-99 ? 112 : 125)) : ((max(1, var_9)))))) == ((((((arr_10 [i_1] [i_3]) ? var_8 : 1680819010317312064))) ? var_1 : 73))));
            arr_13 [i_1] [i_1] [i_1] = (arr_3 [i_1] [15]);
            var_20 = (min(var_20, (((!(((var_5 ? 1 : (!var_12)))))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, var_12));
                    var_22 = ((((min(1, 138))) == 44));

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_1] [i_4] [i_1] = ((!(max((arr_22 [i_1 - 3] [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1]), (arr_10 [i_1] [i_1])))));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_23 *= (((arr_23 [i_1] [i_4] [i_1]) ? var_8 : ((119 ? (arr_3 [i_1] [i_1]) : 183))));
                            arr_28 [i_1] [i_6] [14] [6] [i_4] [i_7] = var_7;
                        }
                        arr_29 [i_1] = ((-91 ? 0 : -1836032200));
                        arr_30 [i_1 - 1] [i_1] = ((min((arr_17 [i_1 - 1] [i_1] [i_5] [i_6 - 1]), var_9)) % ((((var_10 && (arr_9 [i_1 - 3]))))));
                        var_24 *= (~var_9);
                    }
                }
            }
        }
        var_25 = (max(var_25, (arr_19 [6] [i_1] [6])));
    }
    var_26 = var_7;
    var_27 = ((var_10 ? (44 == 1079251982) : (((((112 ? var_0 : 18))) ? ((-4111901362901686898 ? 0 : 4137786107)) : (1 + var_0)))));
    #pragma endscop
}
