/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = 1121155234126309652;
                                var_21 = (max(var_21, (arr_6 [i_4] [i_1] [i_1])));
                                var_22 -= (~var_10);
                            }
                        }
                    }
                }
                arr_13 [i_1] = -3;
            }
        }
    }
    var_23 = (((((var_17 ? var_6 : (min(-391285375, var_17))))) ? var_16 : (((var_18 ? var_18 : var_18)))));

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_24 = (!1121155234126309655);
        var_25 = ((((((arr_14 [i_5]) ^ (((arr_14 [i_5]) | -599))))) ? (max(((((arr_14 [i_5]) ? (arr_14 [i_5]) : -391285375))), (arr_15 [i_5] [i_5]))) : (arr_15 [i_5] [i_5])));
        var_26 = (min((((((598 ? 17325588839583241970 : var_1)) >= (arr_15 [i_5] [i_5])))), (max(-var_0, ((((arr_15 [i_5] [i_5]) > (arr_15 [i_5] [i_5]))))))));
    }
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        var_27 = (arr_12 [i_6 - 1] [i_6] [11]);
        arr_18 [i_6] = (((arr_2 [12] [i_6] [10]) << (((arr_15 [i_6] [1]) - 1133790517))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_21 [i_7] [i_7] = (((((1421004778 * (max((arr_15 [16] [16]), (arr_19 [11])))))) ? (max(var_12, 2765124364557015459)) : (((((var_4 ? var_11 : 32175))) ? var_0 : ((-(arr_14 [11])))))));
        var_28 *= min(((min(-391285388, (arr_20 [i_7] [i_7])))), -1121155234126309648);
    }
    #pragma endscop
}
