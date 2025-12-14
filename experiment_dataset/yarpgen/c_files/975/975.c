/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (min(((var_7 ? var_13 : ((var_9 >> (var_8 - 26813))))), var_10));
    var_16 = ((var_4 ? var_1 : var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((((((~(-2147483647 - 1))))) ? (arr_4 [i_2] [i_1] [i_0] [i_2]) : (((arr_3 [i_2]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
                    arr_6 [i_2] = ((-100 >= ((((((arr_4 [i_0] [i_1] [i_0] [i_2]) & var_5)))))));
                    var_18 = ((-(((arr_4 [i_0] [i_1] [i_0] [i_2]) + (arr_4 [i_0] [i_0] [i_1] [i_2])))));
                }
            }
        }
    }
    var_19 = ((!((min(0, (((var_7 ? var_0 : var_10))))))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_20 = (arr_8 [i_3] [i_3]);
        var_21 &= (arr_7 [i_3]);
        var_22 = (min(((15 ? (((arr_7 [i_3]) ? (arr_7 [i_3]) : (arr_7 [i_3]))) : var_2)), (!var_8)));
        var_23 = (max(((-(arr_7 [i_3]))), (arr_7 [i_3])));
        var_24 = (((((min(-9223372036854775806, 13477583248036293953)) * (arr_8 [i_3] [5]))) >= 7846818814902433258));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((arr_10 [i_4] [i_4]) ? 4065349257294139840 : (arr_9 [i_4]))))));
        var_26 = (arr_10 [i_4] [i_4]);
        var_27 = (((((var_4 ? (arr_7 [14]) : (arr_10 [i_4] [10])))) ? (108 + 0) : (arr_10 [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_13 [i_5] = (((arr_7 [i_5]) ? var_7 : (((arr_12 [7]) ? (arr_8 [i_5] [i_5]) : var_1))));
        arr_14 [7] [7] = (arr_12 [i_5]);
        arr_15 [i_5] = var_4;
    }
    #pragma endscop
}
