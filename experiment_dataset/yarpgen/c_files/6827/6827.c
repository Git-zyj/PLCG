/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = 224;
        arr_4 [i_0] = (((((-67 ? 1143630182418146576 : -2024035748))) ? var_1 : (((((-(arr_2 [i_0])))) ? 35 : (arr_0 [i_0] [i_0])))));
        var_21 = (min((min(var_3, var_6)), (((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = ((((!(arr_2 [i_1]))) ? (((var_3 ? (arr_2 [i_1]) : (arr_2 [i_1])))) : (min(-3279917338809126603, 0))));
        var_23 = 11;
        arr_7 [i_1] = (((((((6386084417212398786 ? 0 : 235)) / ((64 ? 7 : (arr_5 [i_1])))))) / (min(var_12, (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 *= 0;
        arr_10 [i_2] [i_2] = var_8;
        var_25 = (min(0, var_7));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_26 = (min((24229 + 98), ((0 ? (arr_1 [i_3]) : var_4))));
                    arr_18 [i_5] = ((var_4 ? (arr_14 [i_3]) : ((-(min(3366307356111109033, (arr_1 [i_3])))))));
                    arr_19 [i_3] [i_5] [i_5] = ((-(min((~var_15), 35))));
                    arr_20 [i_3] [i_3] [i_3] = 65521;
                    arr_21 [i_3] [i_4] [i_5] = ((((min(0, 1994902306))) ? ((min(((((arr_0 [i_4] [i_5]) >> (1873393134 - 1873393134)))), (arr_11 [i_3] [i_4])))) : -254555354311513867));
                }
            }
        }
    }
    var_27 = (((((((var_0 ? var_0 : 6927553634701477077))) ? (((var_8 ? 14 : -82))) : (min(6927553634701477077, 126)))) ^ ((max(3530431517, var_4)))));
    #pragma endscop
}
