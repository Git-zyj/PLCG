/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((((10 ? var_0 : var_5))) ? ((var_0 << (var_14 + 1569))) : var_14)));
    var_19 = var_9;
    var_20 = (max(var_20, var_11));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_21 *= var_0;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_0 - 1] [17] [i_2] [i_1 + 1] [i_0] [1] [i_1 + 1] = (((((!((!(arr_13 [i_0] [i_0] [i_4] [i_3] [i_3])))))) - (((-5901774200396712394 || var_12) - (arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1])))));
                            arr_16 [i_1] [i_0] = 0;
                            var_22 -= ((!(((-(arr_12 [15] [i_2 + 1] [i_3] [i_3] [1]))))));
                        }
                    }
                }
            }
            var_23 = (max(var_23, (max((max((((var_10 >> (arr_10 [20] [1] [i_1 + 1])))), ((var_4 ? (arr_7 [i_0] [20]) : (arr_3 [1]))))), (((var_7 % (min(var_9, 20641)))))))));
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [8] = (((((((((arr_12 [21] [1] [i_5] [i_5] [i_5]) & (arr_12 [8] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5])))) ? ((var_13 ? (arr_11 [i_0 - 1] [i_5] [18]) : 1)) : ((min((arr_14 [i_5 - 1]), (arr_9 [0] [i_5] [i_5]))))))) ? var_7 : (((max(532651122239577699, var_0)) % var_17))));
            var_24 = (((min((arr_12 [i_0 + 2] [i_0 - 1] [18] [i_0] [i_5]), (((arr_10 [i_0] [i_5] [6]) && (arr_3 [i_5]))))) ? (((max(12, var_5)))) : ((176 & (var_14 + -1)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [i_6] = ((((((((arr_13 [i_0] [i_0] [i_7] [i_7] [i_0]) % var_9))) ? ((var_1 ? (arr_13 [i_0] [i_0] [i_5] [i_6] [i_0]) : 2104026740)) : (((((arr_3 [i_0]) != 80)))))) >= (((min((arr_23 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 - 1] [i_7]), (arr_10 [i_0] [i_7 + 1] [i_0])))))));
                        arr_27 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_6] [i_0] = (((((arr_22 [i_7 + 1] [i_0 - 1] [i_0 - 1] [i_7] [i_0]) < var_14)) ? (((~(var_6 ^ var_16)))) : (((arr_14 [i_5 + 1]) / (arr_2 [i_0])))));
                        var_25 = ((((((((1 ? var_15 : 682))) / (min((arr_10 [i_0] [18] [i_0]), var_13))))) ? ((~(max(var_2, (arr_10 [i_0] [i_0] [i_0]))))) : ((0 ? -9021512062179639113 : ((-(arr_2 [i_0])))))));
                    }
                }
            }
            var_26 = (((((var_16 ? (arr_0 [i_0] [i_0]) : var_9))) ? ((((((arr_25 [i_0] [i_0] [i_0] [i_5 - 2] [20]) ? var_10 : 1))))) : (max(-5901774200396712394, (((var_8 ? (arr_25 [i_0] [i_0] [i_5 - 2] [i_5] [i_0]) : var_3)))))));
        }
        arr_28 [i_0] = ((~((~(arr_4 [i_0] [i_0])))));
        var_27 = 3721234251;
    }
    #pragma endscop
}
