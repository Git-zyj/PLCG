/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 -= ((max(65535, var_0)));
        arr_4 [i_0] = (((((arr_1 [i_0]) > (arr_1 [i_0]))) ? (((((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_12))) ? (arr_0 [i_0] [i_0 - 4]) : (((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) : (((((~(arr_0 [i_0] [i_0])))) ^ (arr_1 [i_0])))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_9 [i_0] = ((((min(65522, (arr_8 [i_0] [i_0] [i_1 - 1])))) * ((var_3 / (arr_8 [i_1 + 2] [i_0] [8])))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    arr_17 [i_0] [i_0 - 2] [i_2] [i_2] [i_0] = ((-(~0)));

                    for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_16 *= (((((max(0, (arr_6 [i_1] [i_3]))) != (((var_13 ? 17194 : var_2))))) ? (arr_6 [i_1] [i_3 + 1]) : (!7)));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0 - 2]) : (arr_3 [i_0 + 2])))) ? (arr_3 [i_0]) : ((max(var_9, (arr_12 [i_0] [i_4 + 1] [i_1 + 1]))))));
                        arr_21 [i_4] [i_4] [i_0] [16] [i_4] = (arr_7 [i_0] [i_0] [i_3 - 3]);
                    }
                    for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (((((max((arr_6 [i_1] [i_1 - 2]), (arr_6 [i_1] [i_1 - 2])))) ? (66 % var_11) : (arr_11 [i_0] [i_1] [14]))))));
                        var_18 = ((arr_8 [i_0] [i_0] [i_2]) == (((arr_11 [i_0 - 4] [i_0] [16]) ? ((var_8 ? (arr_11 [i_0] [i_0] [i_0]) : (arr_3 [i_1 + 2]))) : (arr_19 [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [13]))));
                        arr_26 [i_5] [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] = 2185;
                    }
                }
                arr_27 [i_0] = (var_11 ? ((((~(arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]))))) : (((arr_11 [i_2] [i_0] [i_0]) ? (arr_3 [i_0 - 3]) : (arr_19 [i_0 + 2] [i_0] [i_1] [i_0 + 2] [i_0 + 2] [i_0] [i_2]))));
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_19 = (~17194);
            arr_30 [i_0] = ((!((max((arr_23 [1] [5] [7] [i_0] [14] [i_0 - 1]), (arr_11 [i_0 + 3] [i_0] [i_6]))))));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_35 [i_7] = (min((min((arr_33 [i_7] [i_7]), (arr_31 [i_7]))), (((arr_31 [i_7]) + (arr_31 [i_7])))));
        arr_36 [i_7] = ((255 ? ((((!(((var_1 ? 65522 : var_3))))))) : (min(((max(var_9, var_11))), (((arr_32 [i_7]) * (arr_31 [i_7])))))));
    }
    var_20 = (min(var_20, var_1));
    var_21 = (max(var_21, 1056911608));
    #pragma endscop
}
