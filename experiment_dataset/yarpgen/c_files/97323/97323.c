/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_6 * ((((!(((var_11 ? var_1 : var_3))))))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_0 [i_0 + 3]) + (arr_0 [i_0 - 1]))))));
        arr_2 [i_0] = var_7;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_18 = (min((min(((min(782, var_8))), ((var_4 ? -67 : (arr_3 [i_1]))))), 74));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] [i_3] [i_4] = (arr_5 [i_1]);
                        var_19 = -61;
                        var_20 = ((((min(((var_13 ? var_9 : (arr_3 [12]))), ((max(-59, var_13)))))) ? (((12930616959476169908 ? (~3824018086) : var_9))) : (min(53, ((7126650430171674391 | (arr_11 [i_1])))))));
                        arr_15 [i_1] [i_1] [i_3] [2] = (min(((-(arr_8 [9] [1]))), ((max(-20988, (arr_5 [i_1]))))));
                    }
                }
            }

            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                var_21 = (max(var_21, (min((var_9 || var_12), (((~var_8) ? ((-(-127 - 1))) : var_2))))));
                arr_19 [i_1 - 1] [i_1] = (((~7126650430171674393) ? (8083578792098552121 / -61) : (var_9 >= 65523)));
            }
            var_22 = (max((((~((54 ? -20167 : 65533))))), (max(var_9, -912597650))));
            arr_20 [i_1] = (arr_4 [i_1 - 1]);
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_23 = ((((((arr_21 [i_6]) > (max(var_10, 703329139878209393))))) != (((arr_22 [i_6] [i_6]) ? var_6 : 54))));
        var_24 = (min(var_24, ((((((65523 / ((59978 ? var_3 : -83))))) ? (((arr_21 [i_6]) ? var_9 : (0 != 11320093643537877224))) : (((!(var_8 != var_6)))))))));
    }
    var_25 = var_8;
    var_26 = (max(var_26, (((var_12 ? (((-55 + 2147483647) >> 0)) : ((((-67 && -20988) >= var_9))))))));
    var_27 = ((((((var_12 + 9223372036854775807) >> (0 && 1292740052)))) && var_2));
    #pragma endscop
}
