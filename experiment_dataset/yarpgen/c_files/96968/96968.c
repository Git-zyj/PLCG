/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (max((min((max((arr_1 [i_0]), (arr_0 [i_0 - 2]))), (((arr_0 [7]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))), ((((max((arr_1 [i_0 + 1]), (arr_1 [i_0])))) >> ((((~(arr_0 [10]))) + 1675657373))))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = -885687876;
                        arr_9 [i_1] [i_1] [i_1] = (max((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? ((max((arr_3 [i_0 - 1] [i_1]), 29656))) : (((arr_0 [i_0 - 2]) ? (arr_4 [i_1]) : (arr_5 [i_0]))))), (((((arr_1 [5]) ? (arr_5 [i_0]) : (arr_1 [i_0])))))));
                        arr_10 [0] [i_1] [0] [11] = ((((((((~(arr_5 [i_0 - 1])))) ? ((max((arr_3 [i_3] [i_1]), (arr_1 [i_3])))) : ((max((arr_1 [i_2]), (arr_3 [i_0 + 1] [i_1]))))))) ? (max(((896 ? (arr_0 [i_3]) : 1006632960)), 65532)) : (arr_1 [i_1])));
                    }
                }
            }
            var_15 = (i_1 % 2 == zero) ? ((((((min((((arr_4 [i_1]) | (arr_8 [13] [11] [11] [11]))), (arr_1 [i_0]))) + 2147483647)) >> (((arr_7 [i_1] [i_1] [i_0] [i_0]) + 1204))))) : ((((((((min((((arr_4 [i_1]) | (arr_8 [13] [11] [11] [11]))), (arr_1 [i_0]))) - 2147483647)) + 2147483647)) >> (((((arr_7 [i_1] [i_1] [i_0] [i_0]) + 1204)) - 1638)))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_4] [13] [i_4] = ((arr_4 [i_4]) ? (arr_1 [i_4]) : (((arr_0 [i_0]) & (((arr_11 [i_0]) << (((arr_4 [i_4]) + 1470182967)))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_18 [i_0 - 1] [0] [i_4] [i_6] [i_4] [i_4] = (arr_17 [i_6] [i_6] [7] [6] [i_6]);

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_16 = ((!((min((((arr_8 [i_0 + 1] [10] [i_0 + 1] [10]) ? (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_0 [3]))), (((arr_0 [i_6]) - (arr_6 [12]))))))));
                            arr_21 [i_0] [i_4] [i_4] [0] [i_7] = arr_15 [i_7] [i_4] [i_4] [i_0];
                            var_17 = (min(((((arr_5 [i_0]) ? (arr_20 [i_5]) : (arr_0 [11])))), (((~(arr_12 [i_0] [i_5] [i_7]))))));
                        }
                        arr_22 [i_4] = (((((((arr_6 [13]) ^ (arr_6 [i_6]))) | ((~(arr_11 [i_0]))))) & (arr_3 [i_4] [i_4])));
                        arr_23 [i_6] [6] [i_6] [i_4] [i_6] = (((((((arr_5 [i_0]) & (arr_15 [1] [i_0 - 1] [i_4] [i_6])))) ? (arr_6 [i_0]) : ((max((arr_3 [6] [i_4]), (arr_6 [i_0])))))));
                    }
                }
            }
            var_18 = (max(var_18, (((((~(arr_6 [i_0]))))))));
            arr_24 [i_4] = ((((((~(arr_0 [i_0]))))) ? (min(1525818799, ((-482 ? (arr_16 [i_0] [i_4] [i_4] [i_4]) : -88156410)))) : ((((((arr_2 [i_4]) ? (arr_0 [13]) : (arr_12 [i_4] [i_0] [i_0])))) ? (((arr_8 [8] [i_4] [3] [3]) ? (arr_6 [i_4]) : (arr_8 [i_4] [i_4] [3] [13]))) : ((max((arr_12 [11] [i_0] [i_0]), (arr_1 [i_0]))))))));
        }
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_19 += (min((arr_15 [i_8] [i_8] [10] [10]), (arr_5 [i_8 - 1])));
        arr_28 [i_8] = (arr_26 [i_8 + 2]);
    }
    var_20 -= (((min(var_8, (var_7 ^ var_5))) ^ (var_3 & var_5)));
    var_21 = (max((min((((var_2 ? var_12 : var_5))), var_3)), ((((var_7 ? var_6 : var_1))))));
    var_22 = var_1;
    #pragma endscop
}
