/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 |= ((min(var_12, (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [6] [i_0] = (min(var_4, (arr_8 [i_0 + 1])));
                                var_18 *= -var_7;
                                arr_14 [i_0] [9] [i_2] [9] [3] = ((((!(((0 ? (arr_5 [8]) : 0))))) ? ((((!((((arr_5 [i_1]) << 1))))))) : (max(((max(var_15, (arr_11 [i_1] [i_1] [i_4])))), (7405376527088110479 - 53065)))));
                            }
                        }
                    }
                    var_19 = (max(((~((12470 ? 394195458 : 56360)))), ((max((9155 || var_8), (((arr_7 [16] [11] [3] [11]) ? var_7 : 0)))))));
                    var_20 = ((((max(var_4, (min((arr_12 [i_0 - 2] [i_1] [i_2] [i_2] [i_2]), var_0))))) ? (!0) : ((((min(255, (arr_12 [i_0 + 1] [i_1] [i_2] [i_0] [i_1])))) ? ((var_11 ? var_3 : 63)) : (((var_14 <= (arr_9 [i_0] [i_2]))))))));
                }
            }
        }
        var_21 = ((((((~(arr_6 [i_0] [i_0 - 2] [i_0]))))) ? var_2 : ((max(12470, 56360)))));
        var_22 = (arr_0 [i_0] [i_0 + 1]);
    }
    var_23 = ((((var_11 ? 6089282207588695145 : 51518))));
    var_24 = var_12;

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = ((((2876319400 ? (max(2088433583, 2234241145)) : (!2997641036))) >= ((min(127, 54351)))));
            arr_19 [i_5] = 65535;
            var_26 += ((-(arr_2 [i_6])));
        }
        var_27 = (min(-1, 167));
        var_28 = (max((arr_15 [i_5] [i_5]), ((var_3 * (!var_7)))));
        var_29 = (max((min((max(var_5, 99)), ((((arr_18 [i_5]) ? 37 : 102))))), ((min((!var_0), 511679445)))));
    }
    #pragma endscop
}
