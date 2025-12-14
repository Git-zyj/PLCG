/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 32764;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, (~var_12)));
                        var_21 = ((((((((!(arr_7 [5])))) & (arr_2 [i_2])))) ? ((32764 ? 1 : (arr_8 [i_0] [i_2] [i_3]))) : ((5391010125372243102 ? (arr_3 [i_1] [1] [i_3]) : var_10))));
                        var_22 += 0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_15 [5] [i_0] [i_1] [1] = ((min((var_2 | -32765), ((-118 ? -5476883903282921216 : 0)))));
                        var_23 = ((156 ? ((var_5 ? ((((arr_3 [1] [18] [i_5]) - 82))) : (arr_11 [9] [i_1] [i_5] [16]))) : (((((0 ? (arr_0 [i_0] [i_1]) : 0)))))));
                        arr_16 [5] [i_1] [i_4] [9] = ((1 ? 1 : var_8));
                    }
                }
            }
            var_24 = (min(var_24, ((min(((((18590 + var_2) - (arr_7 [14])))), (((1 - 16711642471827947574) << (((-127 - 1) ? var_16 : var_4)))))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (1 > 17936812456514480308)));
            arr_20 [11] &= ((((-28028 - ((var_0 ? var_7 : (arr_1 [i_0] [i_6])))))) ? (((arr_3 [i_0] [i_6] [i_6]) ? (arr_3 [5] [i_6] [i_0]) : (62696 & var_11))) : (arr_1 [i_0] [1]));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_26 = 11;
                        var_27 = (max(((62356 ? 32764 : -126)), 62338));
                        arr_25 [19] [19] [i_7] = (min((((((max((-2147483647 - 1), (arr_14 [10] [5] [i_7] [i_7] [i_7] [17]))) + 2147483647)) << (((var_17 + 476918319) - 15)))), ((((min((arr_2 [i_0]), 17936812456514480308))) ? (arr_22 [i_8] [i_6] [1]) : 102))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_28 = (min(var_28, (arr_19 [6] [i_9] [i_9])));
            var_29 = (arr_12 [7] [i_0] [i_9]);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_30 [i_0] [i_0] [i_10] = ((arr_22 [i_0] [i_10] [7]) ? (arr_7 [i_10]) : (arr_18 [11] [i_10] [i_0]));
            arr_31 [i_10] [11] = ((1 ? (((1 >= (min((arr_22 [1] [i_10] [1]), var_18))))) : (((((var_9 ? (arr_0 [i_0] [1]) : var_15))) ? (arr_10 [i_0] [19] [i_0] [i_0]) : -0))));
        }
        var_30 &= ((((arr_17 [i_0] [i_0] [i_0]) & 58849)) << (((((var_0 ? var_10 : (arr_1 [i_0] [i_0])))) ? 1 : ((min(var_15, (arr_10 [0] [i_0] [i_0] [i_0])))))));
        var_31 = ((+(min((-23715 - 0), (!var_9)))));
        arr_32 [i_0] = 3482235670;
        var_32 += 509931617195071309;
    }
    var_33 += var_18;
    #pragma endscop
}
