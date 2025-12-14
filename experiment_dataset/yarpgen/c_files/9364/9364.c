/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(var_2 || 64))) ? var_8 : var_11));
    var_19 = (max(var_19, 109));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = 0;
                        var_21 *= ((((min(var_10, (arr_6 [i_1] [i_2] [i_3])))) ? (min(var_3, (arr_6 [i_0] [12] [i_2]))) : ((((4747 < (arr_4 [i_0] [i_0] [i_0])))))));
                    }
                }
            }
        }
        var_22 = (min(var_22, (((~(~var_12))))));
        var_23 ^= var_6;
        var_24 = (8497809431226831734 * 149);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_25 = ((((-8497809431226831721 < 40020) ? 1797845566928580170 : (((0 ? 21763 : 1073739776))))) / (((~(min(var_12, var_16))))));
        var_26 = var_13;
        var_27 = (((((3072 / var_3) ? (arr_0 [i_4]) : ((61 ? var_16 : var_12)))) / (min(var_1, 3072))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    {
                        var_28 = ((((arr_20 [i_7] [i_8 + 2]) + 31044)) / 100);
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((-127 - 1) ? ((var_15 << (var_0 + 7130223474190337545))) : (-8497809431226831721 && 5719366594314768598)));
                        var_29 = (arr_22 [i_8 - 2] [i_8 + 2] [i_8 - 2]);
                        var_30 = ((21763 ? (-2147483647 - 1) : (arr_10 [i_8] [6] [i_8 + 1] [i_8] [i_8])));
                    }
                }
            }
            arr_26 [i_5] = ((+(((arr_23 [i_5]) ? var_7 : (arr_7 [i_5] [4])))));
        }
        arr_27 [i_5] [i_5] = var_3;
    }
    var_31 = (min(2147483647, (25508 - -77)));
    var_32 = 37999;
    #pragma endscop
}
