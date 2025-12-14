/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (arr_7 [i_4 + 2] [i_4] [i_4 + 3] [i_1] [i_0]);
                                var_17 = (((((arr_7 [12] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4 + 2]) ? (arr_7 [i_4] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 1]) : (arr_7 [i_4] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 + 2]))) & ((~((8 >> (var_4 - 1629)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_17 [i_6] [i_6] [i_2] [i_5] [i_6] [i_1] = ((~(arr_3 [i_0] [i_5 + 3])));
                                var_18 = (arr_8 [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((+((min((arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0]), (arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_19 = (var_7 < var_5);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_20 |= ((((max((arr_2 [i_7] [i_7]), (arr_3 [i_7] [i_8])))) ? ((((((arr_0 [i_7]) || (arr_10 [i_7] [i_7] [i_7]))) || ((var_9 && (arr_8 [i_7] [i_7] [i_7])))))) : ((-1 ? (arr_11 [i_8]) : (arr_11 [i_7])))));
                arr_26 [i_8] [i_8] = ((((((var_5 ? (arr_15 [i_8] [i_8]) : (arr_24 [i_8]))) + var_14)) == (((var_1 & var_2) ? ((((arr_3 [i_7] [i_8]) || 1))) : (arr_20 [12])))));
                var_21 = (arr_23 [i_7] [i_8]);
            }
        }
    }
    #pragma endscop
}
