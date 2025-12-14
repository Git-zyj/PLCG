/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((+(((var_6 && var_10) ? ((52740 ? var_2 : var_10)) : var_5))));
    var_13 &= (max((max(var_6, var_7)), var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = (-2147483647 - 1);
        var_14 = (min(var_14, ((((((-var_1 / (max(var_3, (arr_0 [i_0] [i_0])))))) ? var_6 : (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) != (((arr_0 [i_0] [i_0]) ^ -19)))))))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_15 &= var_7;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_3] [i_3] [i_3] = (max((arr_1 [i_1 + 1]), (((-(arr_11 [i_1] [i_1] [i_3] [i_3]))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_16 -= (((var_0 || -4) ? (arr_11 [i_5] [i_5] [6] [i_5]) : (arr_7 [i_1])));
                            arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] = ((((!(arr_7 [i_1]))) ? -0 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_17 &= var_4;
                            var_18 = (((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_7 : (arr_4 [i_1] [i_1]))) <= var_8));
                        }
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = (min((28771 != 1), 31920));
    }
    var_19 = (((var_0 != ((var_6 ? var_3 : var_11)))));
    #pragma endscop
}
