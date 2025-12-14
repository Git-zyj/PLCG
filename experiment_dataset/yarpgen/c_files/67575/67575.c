/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [7] [19] = ((((((max(var_12, 7)) >> ((((arr_1 [i_0] [i_1]) <= (arr_7 [i_0] [2] [4]))))))) ? -5931 : (((min(-25468, (arr_5 [i_0 - 1] [i_0] [i_1]))) * (((var_9 >= (arr_7 [i_0 + 1] [i_1] [i_3]))))))));
                        var_17 = ((1 ? 162 : 13811));
                    }
                }
            }
        }
        var_18 = (arr_8 [i_0] [20] [i_0] [i_0 + 1]);
        var_19 = var_5;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_20 = (((arr_9 [i_4] [i_4] [i_4] [i_4]) ? (((13811 == ((((arr_9 [i_4] [0] [i_4] [i_4]) <= 133)))))) : (max(var_5, (arr_5 [i_4] [i_4] [i_4])))));
        var_21 = -123;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (max(58, ((+(((arr_7 [i_5] [i_5] [i_5]) ? -30505 : (arr_10 [i_5] [9] [i_5] [i_5] [i_5])))))));
        arr_19 [4] [i_5] = ((4095228160 ? (((max((arr_11 [i_5] [i_5] [i_5]), (arr_4 [i_5]))))) : ((var_11 ? (((min(var_6, (arr_13 [i_5]))))) : ((var_1 ? var_13 : var_3))))));
        var_22 = (max(var_22, (((+(((arr_13 [i_5]) % ((((arr_14 [i_5]) <= (arr_11 [i_5] [i_5] [i_5])))))))))));
    }
    var_23 = (((((var_5 | -2023964682) >= var_5)) ? ((124 ? var_14 : var_3)) : ((((((var_4 ? var_3 : 536866816)) >= var_10))))));
    #pragma endscop
}
