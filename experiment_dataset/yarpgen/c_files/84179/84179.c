/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((!var_13), (((((arr_0 [i_0]) ? -557 : var_12)) > (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_1]);
                    var_17 = (((((var_5 && -6177) <= var_11)) ? ((11992 >> (((arr_3 [i_0] [i_0]) - 26069)))) : (((!(arr_0 [i_0]))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [9] &= ((((((max(var_7, var_14)) != (arr_8 [i_1] [i_1] [i_2] [i_3] [i_1]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] [8] = (((8198 && 19864) << (-6376 <= var_8)));
                        arr_11 [i_0] [i_0] [i_2] [6] [i_0] [6] = ((-(((arr_5 [i_0] [i_1] [2] [i_3]) * (arr_5 [i_3] [4] [2] [i_3])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_18 = arr_5 [i_4] [9] [i_2] [i_4];
                        arr_15 [i_0] [i_1] [5] = ((var_11 ? (arr_0 [i_2]) : -var_12));
                        var_19 = var_12;
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_20 = (!-6177);

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_21 = ((+(((((arr_7 [i_8] [i_5] [0] [i_5]) < (arr_8 [2] [2] [7] [i_7] [i_8])))))));
                        var_22 *= ((32757 ? var_3 : ((-8197 | (((var_5 <= (arr_6 [8] [6]))))))));
                    }
                }
            }
            var_23 *= (-31973 <= 6176);
            arr_27 [0] = 8650;
        }
    }
    var_24 *= max(var_5, ((((((-32767 - 1) && -6169)) && ((max(var_11, var_8)))))));
    #pragma endscop
}
