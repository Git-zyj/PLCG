/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (min(9656, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = 212;
                    arr_8 [i_2] [i_2] [i_2] = (((min((((~(arr_1 [i_0])))), (((arr_2 [i_2] [i_2]) ^ (arr_3 [i_1]))))) > ((~(((arr_0 [i_0]) ^ -14584))))));
                    var_17 = ((-(min(((~(arr_5 [i_1] [i_1] [i_0]))), (((arr_5 [i_0] [i_0] [i_0]) ? var_0 : var_12))))));
                    var_18 &= (max((((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_0] [i_0]))), (max(4219302350508971636, 43674))));
                    arr_9 [i_2] [i_1] [i_2] [i_0] = ((((((arr_1 [i_2]) ? (arr_2 [i_1] [i_1]) : (((min((arr_3 [i_0]), (arr_4 [i_2] [6] [i_1] [i_0])))))))) ? (arr_7 [i_2] [i_1] [i_2] [i_2]) : 0));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 ^= (max(var_1, (((((arr_6 [4] [i_4 + 1]) + 2147483647)) << (arr_3 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_23 [i_4] [i_4] [7] [6] [i_7] = (max(((min((arr_19 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 1]), var_0))), (((arr_19 [i_4] [i_4 - 1] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4 + 2]) ? (arr_19 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4 + 2]) : (arr_19 [i_4] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1])))));
                                var_20 = (((var_3 > var_4) > 14583));
                                arr_24 [i_4] [i_4] [i_4] [i_4] [i_3] = (arr_11 [i_3]);
                                arr_25 [i_4] = ((+(max((((arr_17 [i_3] [i_4] [i_4] [0]) ? (arr_1 [i_7]) : var_10)), var_6))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (((+((min((arr_12 [i_3] [i_3]), var_0))))))));
                    arr_26 [i_4] [i_4 + 3] [i_4] = ((-(((arr_6 [i_4] [i_3]) ? 804967880483438545 : var_6))));
                }
            }
        }
    }
    var_22 = ((((((var_6 ? var_12 : var_7))) ? (!var_13) : var_12)));
    #pragma endscop
}
