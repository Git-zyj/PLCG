/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (min(var_13, (~var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] = (max((((arr_8 [i_3] [i_1] [i_3] [i_1]) | (arr_1 [i_0]))), ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_11)))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((+((~((var_3 ? (arr_5 [4] [4]) : (arr_4 [i_0] [i_1])))))));
                            var_14 = ((!(((-(max(3085588333, (arr_4 [i_0] [i_0]))))))));
                            var_15 = (arr_4 [i_0] [i_1]);
                            var_16 = (max(var_16, (((((min((arr_1 [i_0]), 127)))) & 9197017427277505830))));
                        }
                    }
                }
                var_17 = 1209378962;

                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    arr_16 [i_4] = (min(((((((arr_6 [i_0] [i_0] [i_4]) / (arr_4 [i_0] [i_0])))) ^ 1209378963)), (((var_7 ? (arr_1 [i_4 - 2]) : (arr_1 [i_4 - 2]))))));
                    var_18 = 7758562851083102497;
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_19 [i_0] |= (arr_0 [i_5] [1]);

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_5] = ((-((var_3 ? (((min((arr_6 [i_0] [i_5] [i_5]), (arr_1 [i_5]))))) : (max(var_10, 127))))));
                        var_19 = (arr_21 [i_0] [11] [i_5] [i_6]);
                        arr_23 [i_0] [i_0] [19] [i_6] [i_6] = ((+(((arr_9 [19]) ? (((var_3 || (arr_11 [13] [13] [13] [i_6])))) : var_4))));
                    }
                }
                arr_24 [12] = (((((-(min(8864033403060898358, 92))))) ? ((+(((arr_10 [i_0] [i_0] [i_0] [i_0] [2] [2]) ? var_9 : (arr_4 [i_0] [i_1]))))) : ((129 >> (((arr_21 [i_0] [18] [i_0] [i_1]) + 8058914587097847797))))));
            }
        }
    }
    #pragma endscop
}
