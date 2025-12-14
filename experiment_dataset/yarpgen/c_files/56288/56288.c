/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 = (min(var_20, (((((min((arr_0 [1]), (arr_0 [0])))) ? (max((arr_0 [4]), var_10)) : ((((!(arr_0 [4]))))))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (((((((arr_0 [i_0]) ? var_12 : (arr_5 [i_3] [i_0] [i_0] [i_0]))))) << (min((arr_8 [i_0 - 2]), ((-2097152 & (arr_1 [i_0])))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((max((arr_3 [i_0 - 1]), var_5)) == (arr_3 [i_0 - 1])));
                        var_21 -= ((((((-34 ? 8861550466559859216 : (arr_0 [i_2]))) == (((-(arr_8 [i_3])))))) ? (((((var_17 ? var_12 : (arr_0 [i_3])))))) : var_3));
                    }
                }
            }
            arr_12 [i_1] &= var_15;
        }
        arr_13 [i_0] = ((-3233514316 * (min(-2097156, (((arr_2 [i_0 - 1] [i_0] [i_0]) / (arr_0 [i_0])))))));
    }
    var_22 = ((-(((max(9585193607149692399, 2097151)) | (var_12 - var_8)))));
    var_23 = (max(var_23, var_18));
    var_24 -= ((var_4 ? var_15 : ((((var_15 > (var_9 && -2097152)))))));
    #pragma endscop
}
