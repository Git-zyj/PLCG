/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [4] &= ((((((min(3306371669, 1023))) ? 1017 : -3306371669)) + ((+(max((arr_0 [20] [6]), (arr_4 [i_0] [i_0])))))));
                var_17 = (~288228177128456192);
                arr_6 [i_0] [i_0] = (988595627 + -1);
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_18 = arr_3 [i_2] [i_2] [i_2];
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_19 = ((arr_14 [i_2 - 1]) ? ((max(2097136, var_1))) : (max((arr_14 [i_2 - 1]), (arr_2 [i_3 - 2] [i_2] [i_4]))));
                        var_20 = (arr_8 [i_4] [i_5]);
                        var_21 = (max((max((arr_0 [i_2 - 1] [i_5]), var_16)), (arr_0 [i_2 - 1] [i_5])));
                    }
                }
            }

            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_22 = (max(((min(-1919091806, -82))), (min(((-396626952 ? (arr_10 [i_2] [i_2]) : (arr_3 [i_2] [19] [16]))), ((max(0, (arr_12 [i_2 - 1] [i_6 + 2]))))))));
                var_23 = var_8;
                arr_20 [i_6] [i_3] [i_2 - 1] = 65535;
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_23 [19] [i_2] = (arr_9 [15]);
                var_24 = (max(var_15, ((35196 ? var_9 : (((~(arr_11 [i_2 - 1] [i_2]))))))));
            }
            var_25 -= (max((max((arr_8 [i_2 - 1] [i_3 - 2]), (arr_8 [i_2 - 1] [i_3 - 2]))), (arr_7 [i_3 + 1])));
            arr_24 [i_2] [i_2] [i_3] = (max((arr_2 [i_2] [i_2] [22]), (((!((max(var_0, 396626952))))))));
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_26 = (arr_16 [0] [i_2] [i_2 - 1]);
            var_27 = (max(var_27, (((((arr_25 [1]) <= (((arr_18 [i_2] [i_8]) ^ 1032)))) ? (arr_16 [i_2] [i_2] [i_2 - 1]) : (max((arr_7 [i_2 - 1]), ((max((arr_13 [i_2] [i_2] [1] [i_8]), 60344)))))))));
            var_28 = (min(var_28, ((max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_13 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 1]))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_30 [i_9] [i_2 - 1] [i_2 - 1] = (((max((arr_29 [i_2 - 1]), (arr_22 [i_2] [i_2 - 1] [i_2]))) ^ (-9223372036854775807 - 1)));
            var_29 = 988595604;
        }
        var_30 = (min(var_30, (((((min((~1), (min((arr_28 [5] [15] [i_2]), (arr_22 [i_2] [i_2] [i_2])))))) - ((-(min((arr_25 [i_2]), 1)))))))));
        arr_31 [20] [i_2] = ((min(1, (arr_22 [i_2] [i_2 - 1] [20]))) * ((((arr_8 [i_2] [i_2 - 1]) ? (arr_27 [i_2] [i_2 - 1] [i_2]) : (arr_8 [i_2] [i_2 - 1])))));
    }
    #pragma endscop
}
