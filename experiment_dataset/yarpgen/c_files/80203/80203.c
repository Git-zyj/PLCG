/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] [4] = (-13239 ? ((((!(arr_0 [i_0]))))) : (min((~31189), (max(1538971399, (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((min(((max(255, ((min(31189, var_12)))))), (max((arr_8 [i_2 - 1] [1] [i_2] [i_3] [i_1 + 2] [i_1]), (((1538971398 ? 2147483647 : (arr_1 [i_4] [i_4])))))))))));
                            var_22 &= (((min(140, (arr_11 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 2] [10])))));
                        }
                    }
                }
            }
            arr_13 [7] [i_1] [i_0] = ((var_4 / ((min(8388607, (arr_4 [i_1] [i_1]))))));
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 &= (((((var_5 & ((((var_11 || (arr_9 [i_0] [i_5] [i_8] [i_7])))))))) ? ((((((1538971399 && (arr_14 [i_8] [i_8] [i_8])))) & (((arr_0 [i_5]) | 105))))) : (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_6] [i_5] [i_6] [i_7 + 1] [i_7 + 1])))));
                            var_24 = (min(var_24, (((((((22373 / 122) ? 65535 : 7))) ? -766549907 : (((19957 - 2014408096577267993) / 45576)))))));
                            arr_22 [i_0] = (((arr_10 [i_5]) >> (((((arr_5 [i_8] [i_6] [0]) | (arr_11 [i_0] [i_5] [i_6] [i_7 - 2] [6]))) + 63))));
                        }
                    }
                }
            }
            var_25 = 16762684362902533580;
        }
        var_26 = ((!(arr_14 [i_0] [i_0] [i_0])));
        var_27 = 49;
    }
    var_28 = var_7;
    #pragma endscop
}
