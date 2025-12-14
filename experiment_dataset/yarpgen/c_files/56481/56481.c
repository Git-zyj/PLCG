/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_2;
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = 18446744073709551615;
        arr_3 [i_0] = ((((min((arr_1 [i_0]), (-32767 - 1)))) ? ((((!(arr_1 [i_0]))))) : ((var_4 ? var_12 : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [i_3] = (max(4, 32767));
                    var_18 = ((~(((arr_6 [i_1] [i_2]) ? (arr_6 [i_1] [i_3]) : (arr_6 [i_1] [i_1])))));
                }
            }
        }
        var_19 = var_12;
        var_20 = (min(((~((71776119061217280 ? (arr_5 [17]) : (arr_9 [i_1] [14]))))), 32753));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_21 ^= 4;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_25 [i_4] = ((min(var_7, 1152921487426977792)));
                                var_22 = (~-15);
                            }
                        }
                    }
                    var_23 |= 128;
                    var_24 ^= ((var_8 >> ((((arr_4 [i_6]) == ((min((arr_6 [i_4] [i_6]), 128))))))));
                }
            }
        }
        arr_26 [i_4] = ((!(((-9223372036854775807 - 1) < (((arr_5 [i_4 + 1]) ? (arr_17 [i_4]) : -27))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_25 = (arr_11 [i_9]);
                    var_26 = (min(var_26, (arr_23 [i_4 - 1] [2] [i_9] [19] [2] [i_10] [i_10])));
                    arr_32 [i_10] [i_9] [i_9] = 33554424;
                    arr_33 [i_4] [i_10] [i_10] [i_10] = (!-0);
                }
            }
        }
    }
    var_27 = var_11;
    #pragma endscop
}
