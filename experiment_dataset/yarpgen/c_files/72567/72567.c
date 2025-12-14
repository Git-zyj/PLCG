/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_3 == ((min(var_6, var_10))))));
    var_16 = ((var_5 ? ((((-2438603272886419773 ? 40 : var_7)))) : (215 && 240)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 - 1] = var_9;
        var_17 = (((((arr_0 [i_0 - 1]) - (arr_2 [i_0 - 2]))) + (((arr_1 [i_0 - 1] [i_0 - 1]) + var_10))));
        arr_4 [15] = var_0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, -var_4));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((-(var_12 * var_3))))));
                                var_20 = ((var_1 ? var_11 : (arr_8 [5] [i_2])));
                            }
                        }
                    }
                }
            }
        }
        var_21 ^= (((var_12 < 216) && (((var_10 ? var_0 : var_2)))));
        var_22 = (~16169154013426295111);
        arr_17 [1] = ((~(arr_7 [i_1 - 1] [i_1] [8])));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_23 = (max((((-687 <= ((min(-711, 49)))))), (((((var_5 <= (arr_2 [i_6])))) << (1 - -1)))));
        arr_21 [i_6] = (max((((-(20 <= var_10)))), (var_2 * 16169154013426295124)));
    }
    var_24 = (((((((min(1193460622, 1))) ? var_12 : 3580604673))) ? ((((!(1 != 5583140124739733866))))) : (max(8, 1))));
    #pragma endscop
}
