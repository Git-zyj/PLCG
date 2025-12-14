/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(var_15, var_8)))));
    var_21 = var_19;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0] [i_0])));
        var_22 = (max(var_22, ((((arr_1 [i_0 + 2] [4]) < ((0 << (-1 + 34))))))));
        var_23 ^= (((var_8 - 56538) + ((-(arr_1 [i_0 + 3] [10])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_24 = (max(var_24, (arr_3 [i_3])));
                        var_25 = ((23565 != (((arr_9 [i_4 - 2] [i_3 + 2]) ? var_1 : (arr_9 [i_4 - 1] [i_3 - 1])))));
                        var_26 = (min(var_26, (arr_5 [i_1])));
                        var_27 = (max(var_27, (arr_9 [i_1] [i_1])));
                    }
                }
            }
        }
        var_28 = arr_11 [i_1];
        var_29 &= (arr_8 [i_1] [i_1] [i_1] [i_1]);
        var_30 = (min((((+((var_12 ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_19))))), (max(var_12, var_7))));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_31 = ((-(arr_8 [i_1] [2] [2] [i_1])));
            arr_16 [i_5] [i_5] = (min(((((1 ? (arr_9 [3] [3]) : (arr_4 [i_5]))) % (((arr_8 [6] [i_1] [i_5] [i_5]) << (arr_8 [i_1] [5] [i_5] [i_1]))))), 126));
            var_32 = ((((!(arr_4 [i_1]))) ? (!var_14) : (((arr_13 [i_5]) ? (arr_11 [i_1]) : var_9))));
            var_33 = -207768263;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_34 = ((var_0 ? var_5 : (((arr_14 [i_1] [i_6]) ? ((min(var_12, (arr_18 [i_1] [i_6])))) : (arr_3 [i_6])))));
            var_35 = (((arr_3 [i_1]) ? var_8 : (arr_1 [i_1] [i_1])));
            var_36 += (arr_9 [6] [7]);
            arr_21 [i_1] [i_1] [i_6] = var_1;
        }
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_26 [2] = (arr_24 [1]);
        var_37 = (((arr_22 [i_7 - 1]) ? (((!(arr_22 [i_7 + 1])))) : (arr_23 [i_7 - 1])));
    }
    #pragma endscop
}
