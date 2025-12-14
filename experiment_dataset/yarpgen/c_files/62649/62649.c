/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = (((((!7584637153523643053) ? 0 : var_3)) <= var_12));
            var_20 = 0;
            var_21 = min(var_10, (arr_0 [i_0 + 1] [i_1 + 4]));
            var_22 = (max(var_22, 1));
        }
        arr_7 [i_0] = (((((var_17 ? (arr_4 [i_0 + 1]) : (((!(arr_5 [i_0] [i_0 + 1]))))))) * (max(4294967295, 1))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = (((arr_0 [i_0 + 1] [i_2 + 1]) ? (arr_10 [i_0] [i_0 + 1] [15]) : (arr_10 [i_0] [i_0 + 1] [i_0 + 1])));
            var_23 |= ((((!(arr_8 [i_2 + 1] [18] [18]))) ? var_17 : var_2));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            var_24 += (((((((max(var_13, (arr_9 [i_0 + 1] [i_3] [i_3]))) >= var_9)))) * ((var_6 ? var_9 : (arr_5 [i_0] [i_0 + 1])))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_25 = (max(var_25, ((((-var_17 | (!4294967295)))))));
                        var_26 ^= var_4;
                    }
                }
            }

            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                arr_23 [i_0] [i_0] [i_6] [i_6] |= ((((arr_1 [i_6 - 1]) ? var_14 : var_10)));
                var_27 = (((((!(arr_8 [i_0] [4] [i_0])))) >= var_13));
                var_28 = ((+(((arr_18 [i_0 + 1] [i_3 + 1] [i_6] [i_6] [i_6]) ? var_10 : (arr_18 [i_0 + 1] [i_3] [9] [1] [i_0])))));
            }
            arr_24 [i_0] [i_3] = (arr_4 [i_3]);
        }
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        arr_29 [2] [18] = (!var_7);
        var_29 += ((((max(7584637153523643053, var_9))) ? var_13 : 160432875));
        var_30 = (max(var_30, (((((!var_13) - (~690943092)))))));
    }
    var_31 += (min(var_0, var_14));
    #pragma endscop
}
