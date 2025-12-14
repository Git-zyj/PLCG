/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_3, (min(((var_4 ? var_11 : 26783)), var_1))));
    var_13 &= (min((((((var_4 ? var_1 : var_5))) ? var_7 : var_4)), (((((min(var_10, var_5))) ? 26783 : var_6)))));
    var_14 = (min(var_14, var_4));
    var_15 |= (min(((((min(var_8, var_7))) ? (!var_9) : (255 | 38752))), ((min(26808, 186)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((min(-14093, 1))));
        var_16 = ((var_10 ? var_9 : 26783));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_17 = ((((min(1, 255))) ? ((min(38740, 44670))) : ((((-2147483647 - 1) <= 38763)))));
            var_18 = (((arr_4 [i_0] [i_0 - 1]) != (max(638308979, 175))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [18] [i_0] = ((((638308979 / (arr_4 [i_0] [i_0])))) ? ((((max((arr_6 [i_0]), (arr_4 [i_0] [i_2])))) % -26795)) : (!363449403));
            arr_9 [i_2] [i_0] = ((var_0 ? 38740 : 26795));
            arr_10 [i_0] = (min(var_5, 3656658316));
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        var_19 = (((arr_11 [i_3 - 1]) + (arr_12 [i_3 - 3] [i_3 - 3])));
        arr_14 [i_3] = ((var_3 ? (arr_3 [i_3 - 1]) : (arr_3 [i_3 - 4])));
        var_20 = (((arr_11 [i_3 - 4]) ? (arr_11 [i_3 - 4]) : (arr_11 [i_3 - 4])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_21 ^= var_5;
        var_22 = ((!(((arr_0 [i_4] [i_4]) == (min(var_3, var_2))))));
        var_23 = (min(var_23, (((((((!var_3) >> (((arr_15 [i_4]) / var_10))))) ? ((13720842049644431045 ? (arr_15 [i_4]) : (max(var_3, (arr_18 [i_4]))))) : (((var_1 ? (arr_1 [i_4]) : (arr_1 [i_4])))))))));
    }
    #pragma endscop
}
