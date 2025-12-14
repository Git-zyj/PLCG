/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_0] = (min(var_10, (((var_16 > var_5) ^ var_10))));
                    var_17 = ((var_13 ? (max((arr_7 [i_0]), var_3)) : (((-var_6 ? (min((arr_9 [i_0]), (arr_5 [i_0] [i_1] [i_2]))) : var_4)))));
                    var_18 ^= (min(1, ((~(arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
                    arr_11 [i_0] [i_0] [i_2 + 2] = (arr_6 [i_0] [1] [20]);
                    arr_12 [i_0] [i_1] [i_2 + 2] = ((min(((var_16 ^ (arr_8 [i_0] [i_1]))), var_11)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_19 = (59542 < (arr_5 [i_3] [i_3] [i_3]));
        var_20 = (((arr_2 [i_3]) | 88));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    arr_25 [i_5] [i_5] [i_4] = ((var_1 < (((var_6 ? (var_3 || -104) : var_13)))));
                    arr_26 [i_4 - 2] [i_5] [i_6 - 1] [i_6 - 1] = ((((((var_0 ^ var_15) ? 2590307821 : (max((arr_21 [i_4 - 2] [i_4]), var_16))))) ^ ((((max(var_16, (arr_24 [i_4] [i_4] [i_4] [i_4])))) ? (var_6 ^ var_15) : (~var_1)))));
                    arr_27 [i_6 + 1] = ((((((((arr_1 [i_5]) / var_13))) ? (arr_23 [i_4 - 1]) : var_9)) == (20 ^ -1521430817)));
                    arr_28 [i_4] = (arr_0 [i_4]);
                    arr_29 [i_4] [i_4] [i_4] [i_4] = 468554774;
                }
            }
        }
        arr_30 [1] &= ((+((var_11 ? ((((((arr_9 [i_4]) + 2147483647)) >> (62398 - 62398)))) : 0))));
        arr_31 [i_4] = (max((arr_0 [i_4]), var_15));
        arr_32 [i_4] = (min((~1704659497), (max(var_9, (!0)))));
    }
    #pragma endscop
}
