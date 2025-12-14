/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (min(var_20, ((((((arr_1 [6] [i_0 + 2]) ? (arr_4 [14]) : (arr_1 [2] [i_0 - 3])))) && ((((arr_4 [16]) ? 3280459235 : (arr_4 [16]))))))));
            var_21 = var_8;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_22 = (((((min(var_15, var_18))) ? var_16 : (arr_5 [i_2] [i_0] [i_2]))));
            var_23 += 78;
            var_24 = ((min((arr_6 [i_0 - 1] [i_2] [i_2]), var_7)));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_25 = ((max(((var_5 ? var_15 : 1014508061)), ((((arr_8 [i_3] [i_0 - 1]) - (arr_8 [i_3] [i_0 + 1])))))));
            var_26 = max((((!(arr_8 [i_3] [i_0 - 1])))), var_14);
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_27 = (max(var_27, ((((((var_15 ? (arr_7 [i_4] [i_6 - 2] [i_4]) : (arr_7 [i_4] [i_6 - 2] [i_6 - 2])))) ? (arr_7 [i_4] [i_6 + 1] [i_6 - 2]) : ((((arr_7 [i_4] [i_6 - 2] [i_6]) != var_2))))))));
                        var_28 &= (((min(3280459235, var_18)) ^ ((((((arr_12 [i_4] [i_4] [i_4]) ? var_17 : (arr_16 [i_0 + 1] [i_6] [i_5] [i_4] [i_6]))) ^ (var_2 ^ var_15))))));
                        var_29 = (max(var_29, (((!(~-80))))));
                        arr_17 [i_0] [i_5] [i_0] = ((!((!(arr_4 [i_0])))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_30 = (arr_20 [i_7]);
        arr_21 [i_7] = (max((((arr_19 [i_7]) ? ((max((arr_14 [i_7]), (arr_3 [i_7] [i_7] [i_7])))) : (arr_18 [i_7]))), (((((max((arr_14 [i_7]), var_2))) | ((0 ? 1668857837 : (arr_5 [i_7] [i_7] [i_7]))))))));
        var_31 = (min(var_31, ((((min((max(var_9, 12908)), (max(var_17, (arr_15 [i_7] [i_7] [1] [i_7]))))) < ((min((arr_2 [i_7]), 93))))))));
        var_32 = (3227477020 ? (max((arr_0 [i_7] [i_7]), var_1)) : (arr_0 [i_7] [i_7]));
        arr_22 [i_7] = ((2525051204 ? (min((arr_12 [i_7] [i_7] [i_7]), var_11)) : ((max((((arr_14 [i_7]) / var_11)), (min((arr_14 [i_7]), var_2)))))));
    }
    var_33 = var_11;
    #pragma endscop
}
