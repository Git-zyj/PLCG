/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, (((!((((arr_2 [i_0]) | var_11))))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = ((var_4 | (arr_3 [i_0] [i_1])));
            var_15 = -224;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = ((63935 << (var_0 - 43219)));
            var_17 = (min(var_17, var_2));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_3] [i_3] [i_3] = -8104569674473666200;
                        var_18 = (min(var_18, (((!(arr_17 [i_5] [i_5] [i_0] [4]))))));
                        var_19 ^= (arr_2 [i_0]);
                    }
                }
            }
            var_20 = ((-((224 ? var_2 : (arr_8 [i_3])))));
            var_21 = (arr_7 [11]);
            var_22 = (arr_0 [i_0]);
            var_23 = (arr_6 [i_0] [i_0] [i_3]);
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_24 = var_0;
        var_25 ^= ((max(((-(arr_20 [i_6]))), ((min(7168, var_3))))));
        var_26 = (((((var_11 / (arr_20 [i_6])))) ? (min(var_0, -4018444561632421519)) : ((((arr_20 [i_6]) ? (arr_20 [i_6]) : (arr_20 [i_6]))))));
        var_27 = ((((arr_21 [i_6] [i_6]) / (arr_21 [i_6] [i_6]))));
    }
    var_28 ^= var_11;
    #pragma endscop
}
