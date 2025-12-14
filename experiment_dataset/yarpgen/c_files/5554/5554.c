/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(221674276, ((max(37378, -1)))))) ? ((var_11 & ((4 ? -1707 : var_8)))) : var_12));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = ((((((arr_0 [i_0] [i_0]) ? ((-(arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))) ? ((((((-(arr_1 [i_0])))) ? (arr_1 [i_0]) : (min(-2147483646, 2147483645))))) : (((var_14 / (arr_1 [i_0]))))));
        var_20 = (max(var_20, (min((arr_1 [i_0]), ((min(var_16, var_6)))))));
        var_21 = ((((!(((var_6 * (arr_0 [i_0] [i_0])))))) ? var_7 : ((13568 ? (((var_12 ? (arr_1 [i_0]) : var_5))) : var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 = ((+((min((arr_3 [i_0] [i_0]), (arr_6 [i_0] [6] [1] [6]))))));
                    var_23 ^= (((+-38351) ? (arr_2 [i_0] [i_0] [i_2]) : (arr_4 [i_0] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_24 = 8796093021952;
                                var_25 = (max((((var_7 ? 6429 : (arr_11 [i_0] [i_1] [i_0] [i_4])))), (arr_6 [i_3] [i_3 + 1] [i_4 + 1] [i_4])));
                                var_26 = ((!(((~(arr_8 [i_0] [i_4 + 1] [i_4] [i_4] [i_4 + 1]))))));
                                var_27 *= (max(((~((~(arr_8 [i_2] [10] [i_2] [i_1] [i_2]))))), (arr_9 [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1])));
                            }
                        }
                    }
                    var_28 -= var_13;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (((!var_17) + (min((-17 && 1), ((-1711 ? (arr_13 [i_5] [i_5]) : (arr_1 [i_5])))))));
        var_29 ^= (min(120, 38352));
        var_30 = (((((~((min(-1706, (arr_13 [i_5] [i_5]))))))) ? 1 : ((~(((!(arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
    }
    var_31 = (min((((var_11 ? -1709 : -1713))), (var_1 + var_12)));
    var_32 = (~(var_8 ^ var_15));
    #pragma endscop
}
