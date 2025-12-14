/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((arr_3 [i_1] [i_0] [i_0]) * (arr_5 [i_0]))) & ((((var_1 - -3204788832420140267) ? ((max(var_6, (arr_5 [i_1])))) : (3204788832420140267 >= var_3))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = ((((((arr_9 [i_0] [i_1] [i_2] [i_3]) >> (-3204788832420140267 + 3204788832420140310)))) && ((!(!var_2)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (min((min(-var_6, (max((arr_0 [i_4]), var_0)))), ((min(var_0, 3204788832420140277)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 ^= (((((((var_2 ? var_6 : var_3))) ? var_9 : (8658654068736 | var_3)))) ? 3204788832420140269 : (3204788832420140259 * 18446744073709551605));
    var_12 *= var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_13 = (min(var_13, var_5));
                    var_14 = (min(var_14, var_4));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_15 = var_4;
                                var_16 = (!0);
                                arr_33 [i_10] [i_5] [i_5] [i_5] = (min(var_0, (((((-(arr_5 [i_5])))) ? 0 : 16258864765190862791))));
                                var_17 |= (((min(-1181689235, 34084860461056)) * (((-(((arr_15 [i_5]) / (arr_31 [i_5] [i_8] [i_6] [14] [i_8] [i_5]))))))));
                            }
                        }
                    }
                    var_18 = ((min((!16258864765190862788), ((1 ? (arr_25 [i_8] [i_6] [i_6] [i_8]) : 9007164895002624)))) << (var_5 + 5431));
                    arr_34 [i_5] [i_6] = -1;
                    var_19 |= var_4;
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_37 [0] [i_11] [i_6] [0] &= (!-3204788832420140267);
                    var_20 = ((0 ? 1 : 2903073579));
                }
                var_21 += (arr_2 [i_5] [i_5]);
            }
        }
    }
    #pragma endscop
}
