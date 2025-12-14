/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_17 = ((min(8402236831736196349, var_13)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        var_18 = (min(1466423551, (((((min(var_15, 62087))) ? (((28761 && (arr_7 [i_2] [i_2])))) : ((var_11 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0]))))))));
                        arr_10 [i_2] = 6039;
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_19 = ((!(((var_6 ? (arr_0 [i_0 + 4]) : (arr_0 [i_0 - 2]))))));
                            var_20 = (((((((!(arr_11 [i_2])))) + (~36775))) != (((!(((1 ? (arr_12 [9] [11] [i_2] [i_4] [i_5] [i_2]) : (arr_8 [i_0] [i_0] [i_4])))))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [2] [i_0 + 2] = (!0);
                            var_21 = 1;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_23 [0] [i_1] [0] [6] [i_2] = arr_19 [i_0] [i_1] [i_1] [i_1] [i_4 - 2] [i_4] [i_2];
                            var_22 = (max(var_22, (!32767)));
                        }
                        arr_24 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_4] = (+(max((arr_12 [i_0 + 2] [i_2] [i_2] [i_2] [i_4 + 3] [i_4 + 2]), (arr_15 [i_0] [i_0]))));
                        var_23 = (i_2 % 2 == zero) ? ((((((arr_20 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_4 - 2]) ? (arr_21 [3] [i_2] [3] [i_2] [i_0 - 1]) : (arr_20 [i_0] [i_0 - 4] [i_4] [1] [i_4 + 1]))) >> (((((arr_20 [i_0] [i_0 + 4] [6] [7] [i_4 - 1]) ? 32767 : (arr_20 [i_0] [i_0 + 1] [i_4] [i_4] [i_4 + 1]))) - 32750))))) : ((((((((arr_20 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_4 - 2]) ? (arr_21 [3] [i_2] [3] [i_2] [i_0 - 1]) : (arr_20 [i_0] [i_0 - 4] [i_4] [1] [i_4 + 1]))) + 9223372036854775807)) >> (((((arr_20 [i_0] [i_0 + 4] [6] [7] [i_4 - 1]) ? 32767 : (arr_20 [i_0] [i_0 + 1] [i_4] [i_4] [i_4 + 1]))) - 32750)))));
                    }
                    var_24 = (max(var_24, ((((((~(-79 > 0)))) ? -32752 : ((((arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) != var_8))))))));
                }
            }
        }
    }
    var_25 = (min((min(var_9, var_12)), var_7));
    var_26 = 1;
    var_27 = var_14;
    var_28 = var_12;
    #pragma endscop
}
