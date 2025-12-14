/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_4;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_17 = (~18014397435740160);
        arr_3 [i_0 + 3] [i_0 + 3] = (arr_1 [i_0 - 1] [10]);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 = (min((((arr_6 [i_0] [i_0]) ^ ((max((arr_7 [i_1] [i_0]), (arr_7 [i_0] [6])))))), var_7));
            arr_8 [i_1] = ((((+(((arr_2 [i_1]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0] [i_0]))))) - (max((var_13 * var_12), ((((arr_4 [i_0] [15] [i_1]) || (arr_5 [i_0] [i_0] [i_1]))))))));
            arr_9 [i_1] = arr_4 [i_0] [i_0 + 2] [i_1];
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_14 [i_2] [5] = ((((((((arr_12 [i_0 + 1] [i_0 + 1]) <= var_13))) + var_2)) >> (((((arr_13 [i_0] [i_0 + 1] [i_0]) ^ (18014397435740160 + -10086))) - 18014397435730053))));
            var_19 = (arr_11 [i_2]);
            var_20 = (max((arr_4 [i_0] [i_2] [i_0]), (arr_13 [i_0 - 2] [i_0 - 1] [i_0 + 3])));
            arr_15 [i_2] [1] = (arr_11 [i_0]);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_21 [i_3] [i_4] [i_3] [i_0 + 3] = (max((((arr_20 [i_0 + 1] [i_4 - 1] [i_4 - 1]) | (arr_10 [i_0 + 1] [i_4 - 1]))), (((!(arr_10 [i_0 + 1] [i_4 - 1]))))));
                    arr_22 [i_0 - 1] [i_3] [11] = (arr_16 [i_0] [i_3] [i_0]);
                    var_21 = 4612;
                    arr_23 [0] [0] [0] = ((((((arr_6 [i_4 + 1] [i_0 + 2]) ? (arr_6 [i_4 - 2] [i_0 - 3]) : (arr_6 [i_4 - 2] [i_0 + 2])))) ? (arr_18 [i_0 + 2] [i_0] [i_0 + 2]) : 18014397435740151));
                }
            }
        }
        arr_24 [i_0] = ((((max((arr_12 [i_0] [i_0]), ((var_4 ? (arr_11 [13]) : -23609))))) ? (arr_19 [i_0]) : ((max((arr_17 [i_0 - 2] [i_0 - 1]), (arr_17 [i_0 + 3] [i_0]))))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_22 = var_2;
        var_23 = ((arr_25 [0]) ? 1979553248 : var_12);
        var_24 *= ((0 ? 4600 : -2619621333487652635));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 = (min(var_25, ((((((18014397435740160 ? (arr_27 [i_6]) : (arr_28 [i_6])))) & ((18014397435740160 + (arr_25 [i_6]))))))));
        arr_31 [14] [i_6] = ((~(((arr_29 [i_6] [i_6]) - (arr_29 [i_6] [i_6])))));
        var_26 = (min(var_26, ((((arr_28 [i_6]) >> (((arr_28 [i_6]) - 629245905)))))));
    }
    var_27 = (-8 + 0);
    var_28 = var_12;
    #pragma endscop
}
