/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 &= (max(((max((arr_4 [i_0 + 2] [i_0 + 2]), -var_4))), (((arr_1 [i_0 + 1]) / -1899231849))));
                    var_13 ^= ((((!(!1073217536))) ? (1911186516274462205 + 1) : (arr_3 [11])));
                    var_14 = (((!var_4) ? (max(var_10, var_6)) : var_5));
                }
            }
        }
    }
    var_15 = var_1;

    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_16 = (max((arr_5 [i_3] [1]), (((105 != (max(8, (arr_5 [12] [4]))))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_17 &= -var_3;
                        var_18 = ((((28 ? var_1 : (((var_8 > (arr_15 [1] [i_4 + 1] [i_5] [1] [i_6])))))) > (((!((!(arr_8 [i_5]))))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        arr_19 [i_7] = ((151 - (min((max(var_3, (arr_18 [i_7] [i_7]))), var_0))));
        var_19 = var_4;
    }
    var_20 = var_9;
    #pragma endscop
}
